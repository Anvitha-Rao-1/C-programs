#include <stdio.h>
#include <string.h>

struct students
{
    int regs;
    char name[20];
    char dept[20];
    float m1, m2, m3;
    float avg, total;
};


void enter_data(struct students student[], int n)
{
    int i;

    printf("\n===========--- Enter Data ---============\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details for %d student\n", i + 1);

        printf("\nEnter Register Number: ");
        scanf("%d", &student[i].regs);
        getchar();

        printf("\nEnter Name of Student: ");
        fgets(student[i].name, 20, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("\nEnter department name: ");
        fgets(student[i].dept, 20, stdin);
        student[i].dept[strcspn(student[i].dept, "\n")] = '\0';

        printf("\nEnter marks in 1 subject: ");
        scanf("%f", &student[i].m1);

        printf("\nEnter marks in 2 subject: ");
        scanf("%f", &student[i].m2);

        printf("\nEnter marks in 3 subject: ");
        scanf("%f", &student[i].m3);

        printf("\n");
    }
}


void calc(struct students student[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        student[i].total = student[i].m1 + student[i].m2 + student[i].m3;
        student[i].avg = student[i].total / 3;
    }
}


void print(struct students student[], int n)
{
    int i;

    printf("\n================---- DETAILS OF STUDENTS ----===================\n");

    printf("%-10s %-15s %-10s %-10s %-10s %-10s %-10s\n",
           "Reg No", "Student name", "Marks1", "Marks2",
           "Marks3", "Total", "Average");

    for(i = 0; i < n; i++)
    {
        printf("%-10d %-15s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n",
               student[i].regs,
               student[i].name,
               student[i].m1,
               student[i].m2,
               student[i].m3,
               student[i].total,
               student[i].avg);
    }
}


void update_marks(struct students student[], int n)
{
    char selected[20];
    float u_m1, u_m2, u_m3;
    int flag = 0;
    int i;

    getchar();

    printf("\nEnter whose data you want to change: ");
    fgets(selected, 20, stdin);
    selected[strcspn(selected, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(selected, student[i].name) == 0)
        {
            printf("\nEnter new m1: ");
            scanf("%f", &u_m1);
            student[i].m1 = u_m1;

            printf("\nEnter new m2: ");
            scanf("%f", &u_m2);
            student[i].m2 = u_m2;

            printf("\nEnter new m3: ");
            scanf("%f", &u_m3);
            student[i].m3 = u_m3;

            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("\nStudent not found");
    }
}


void highest(struct students student[], int n)
{
    float highest_total = student[0].total;
    char name_highest[20];
    float class_avg = 0;
    int i;

    strcpy(name_highest, student[0].name);

    /* Calculate class average */
    for(i = 0; i < n; i++)
    {
        class_avg = class_avg + student[i].avg;
    }

    class_avg = class_avg / n;

    /* Find highest scoring student */
    for(i = 0; i < n; i++)
    {
        if(student[i].total > highest_total)
        {
            highest_total = student[i].total;
            strcpy(name_highest, student[i].name);
        }
    }

    printf("\nHighest Scoring Student: %s", name_highest);
    printf("\nHighest Total: %.2f", highest_total);

    printf("\nClass Average: %.2f", class_avg);

    /* Students above class average */
    printf("\n\nStudents above class average:");

    for(i = 0; i < n; i++)
    {
        if(student[i].avg > class_avg)
        {
            printf("\nName of student: %s", student[i].name);
        }
    }
}


int main()
{
    int n;
    int choice;

    printf("\nEnter number of students in class: ");
    scanf("%d", &n);

    struct students student[n];

    do
    {
        printf("\n\n=================-------> ENTER CHOICE <-------=============================\n");

        printf("\n1. Enter details of student");
        printf("\n2. Calculate total and average");
        printf("\n3. Display student details");
        printf("\n4. Update marks");
        printf("\n5. Find highest and class average");
        printf("\n6. Exit");

        printf("\n\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enter_data(student, n);
                break;

            case 2:
                calc(student, n);
                printf("\nTotal and average calculated successfully!");
                break;

            case 3:
                print(student, n);
                break;

            case 4:
                update_marks(student, n);
                calc(student, n);
                break;

            case 5:
                highest(student, n);
                break;

            case 6:
                printf("\nExiting program...");
                break;

            default:
                printf("\nInvalid choice");
        }

    } while(choice != 6);

    return 0;
}