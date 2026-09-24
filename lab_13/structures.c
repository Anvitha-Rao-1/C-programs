
#include<stdio.h>
#include<string.h>

int main()
{
    struct
    {
        int rollNo;
        char name[50];
        float m1,m2,m3;
        float avg;
        float total;
        float cgpa;
    }student[5];

    int choice;
    char continueMenu;
    int dataEntered=0;

    do
    {
        printf("\n============ MENU ============\n");
        printf("1. Enter details, calculate Total, Average & CGPA\n");
        printf("2. Display highest and lowest marks of student\n");
        printf("3. Display grade and CGPA of student\n");
        printf("4. Display marks and CGPA of certain Student only\n"); //complexity also checking marks range
        printf("5. Display total Average & Class CGPA\n"); //complexity
        printf("6. Exit\n");
        printf("ENTER CHOICE: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("\n____________________________________________\n");
                printf(" Enter details of %d students ",5);
                printf("\n____________________________________________\n");

                for(int i=0;i<5;i++)
                {
                    printf(" |Enter details of student %d\n",i+1);
                    printf(" |Enter the Name of the student: ");
                    scanf("%49s",student[i].name);

                    printf(" |Enter the roll number: ");
                    scanf("%d",&student[i].rollNo);

                    // Input validation loops for marks (0 to 100)
                    do
                    {
                        printf(" |Enter the marks of math (0-100): ");
                        scanf("%f",&student[i].m1);

                        if(student[i].m1>100||student[i].m1<0)
                        {
                            printf("Invalid marks! Please enter between 0 and 100.\n");
                        }

                    }while(student[i].m1>100||student[i].m1<0); //complexity: while invalid it asks user to keep entering

                    do
                    {
                        printf(" |Enter the marks of C lang (0-100): ");
                        scanf("%f",&student[i].m2);

                        if(student[i].m2>100||student[i].m2<0)
                        {
                            printf(" Invalid marks! Please enter between 0 and 100.\n");
                        }

                    }while(student[i].m2>100||student[i].m2<0);

                    do
                    {
                        printf(" |Enter the marks of DLD (0-100): ");
                        scanf("%f",&student[i].m3);

                        if(student[i].m3>100||student[i].m3<0)
                        {
                            printf("Invalid marks! Please enter between 0 and 100.\n");
                        }

                    }while(student[i].m3>100||student[i].m3<0);

                    printf("\n");

                    student[i].total=student[i].m1+student[i].m2+student[i].m3;
                    student[i].avg=student[i].total/3;

                    student[i].cgpa=student[i].avg/9.5;

                    if(student[i].cgpa>10.0)
                    {
                        student[i].cgpa=10.0;
                    }
                }

                dataEntered=1;

                printf("============RESULTS ARE============\n");

                for(int i=0;i<5;i++)
                {
                    printf("\n____________________________________________\n");
                    printf(" STUDENT DETAILS ");
                    printf("\n____________________________________________\n");
                    printf(" Name of student: %s \n",student[i].name);
                    printf(" Roll Num of student: %d \n",student[i].rollNo);
                    printf(" Total marks on 300 is: %.2f\n",student[i].total); // Fixed string format glitch
                    printf(" Avg marks of student is: %.2f \n",student[i].avg);
                    printf(" Calculated CGPA is: %.2f \n",student[i].cgpa);
                }

                break;
            }

            case 2:
            {
                if(!dataEntered)
                {
                    printf("Please enter student data first (Choice 1)!\n");
                    break;
                }

                float highest=student[0].total;
                float lowest=student[0].total;
                char name_highest[50];
                char name_lowest[50];

                strcpy(name_highest,student[0].name);
                strcpy(name_lowest,student[0].name);

                for(int i=1;i<5;i++)
                {
                    if(student[i].total>highest)
                    {
                        highest=student[i].total;
                        strcpy(name_highest,student[i].name);
                    }

                    if(student[i].total<lowest)
                    {
                        lowest=student[i].total;
                        strcpy(name_lowest,student[i].name);
                    }
                }

                printf("Highest marks are %.2f by student %s \n",highest,name_highest);
                printf("Lowest marks are %.2f by student %s\n",lowest,name_lowest);

                break;
            }

            case 3:
            {
                //complexity add grade

                if(!dataEntered)
                {
                    printf("Please enter student data first (Choice 1)!\n");
                    break;
                }

                for(int i=0;i<5;i++)
                {
                    printf("Student %s | CGPA: %.2f | ",student[i].name,student[i].cgpa);

                    if(student[i].total>290)
                    {
                        printf("Grade: A \n");
                    }
                    else if(student[i].total<=290&&student[i].total>250)
                    {
                        printf("Grade: B \n");
                    }
                    else if(student[i].total<=250&&student[i].total>200)
                    {
                        printf("Grade: C \n");
                    }
                    else if(student[i].total<=200&&student[i].total>150)
                    {
                        printf("Grade: D \n");
                    }
                    else
                    {
                        printf("Grade: F \n");
                    }
                }

                break;
            }

            case 4:
            {
                if(!dataEntered)
                {
                    printf("Please enter student data first (Choice 1)!\n");
                    break;
                }

                char deet[50];
                int found=0;

                printf("Which student's details do you want: ");
                scanf("%49s",deet);

                for(int i=0;i<5;i++)
                {
                    if(strcmp(student[i].name,deet)==0)
                    {
                        printf("Roll no is: %d\n",student[i].rollNo);
                        printf("Total marks on 300 is: %.2f\n",student[i].total);
                        printf("Avg marks of student is: %.2f \n",student[i].avg);
                        printf("CGPA of student is: %.2f \n",student[i].cgpa);

                        found=1;
                    }
                }

                if(!found)
                {
                    printf("No name found\n");
                }

                break;
            }

            case 5:
            {
                //complexity gives class avg and avg cgpa

                if(!dataEntered)
                {
                    printf("Please enter student data first (Choice 1)!\n");
                    break;
                }

                float class_total_sum=0;
                float class_cgpa_sum=0;

                for(int i=0;i<5;i++)
                {
                    class_total_sum+=student[i].avg; // Summing individual averages
                    class_cgpa_sum+=student[i].cgpa;
                }

                float class_avg=class_total_sum/5;
                float class_avg_cgpa=class_cgpa_sum/5;

                printf("Total Average performance of entire class: %.2f%%\n",class_avg);
                printf("Average CGPA of the entire class is: %.2f\n",class_avg_cgpa);

                break;
            }

            case 6:
            {
                printf("Exiting program...\n");
                return 0;
            }

            default:
            {
                printf("Invalid Choice!\n");
            }
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&continueMenu);

    }while(continueMenu=='y'||continueMenu=='Y');

    return 0;
}
