
#include<stdio.h>

int main()
{
    int ID,overtime,perform;
    float Tax,Basic_Salary;
    char name[100];
    int choice;
    char continueMenu;

    do
    {
        printf("\n================ MENU ================\n");
        printf("1. Enter Employee Details\n");
        printf("2. Calculate Salary\n");
        printf("3. Display Employee Details\n");
        printf("4. Check Performance and Reward\n");
        printf("5. Check Employee ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter employee name : ");
                scanf(" %s",name);

                printf("Enter employee ID : ");
                scanf("%d",&ID);

                printf("Enter employee overtime hours : ");
                scanf("%d",&overtime);

                printf("Enter employee performance score : ");
                scanf("%d",&perform);

                printf("Enter employee Tax : ");
                scanf("%f",&Tax);

                printf("Enter employee Basic Salary : ");
                scanf("%f",&Basic_Salary);

                printf("\nEmployee details entered successfully!\n");
                break;

            case 2:
            {
                //Calculating overtime pay
                int overtime_pay=250*overtime;

                //Calculating gross salary
                float gross_salary=Basic_Salary+overtime_pay;

                //Calculate tax amount
                float tax_amount=gross_salary*Tax/100.0;

                //Calculate salary
                float net_salary=gross_salary-tax_amount;

                //conditional operator use
                int bonus=(perform>=80)?5000:2000;

                printf("\n--------------------------------------------------------\n");
                printf(" EMPLOYEE SALARY SLIP\n");
                printf("--------------------------------------------------------\n");
                printf("\n");

                printf("Bonus is: %d\n",bonus);

                //Relational Operator
                if(perform>=85)
                {
                    printf("1\n");
                }
                else
                {
                    printf("0\n");
                }

                //logical operator
                printf("\n");

                if(perform>=90&&net_salary>50000)
                {
                    printf("1 and reward granted\n");
                }
                else
                {
                    printf("0 and reward not granted\n");
                }

                printf("\n");

                //Modulus Operator
                printf("\n");

                if(ID%2==0)
                {
                    printf("ID is an even ID\n");
                }
                else
                {
                    printf("ID is an odd ID\n");
                }

                printf("\n");

                //Increment
                overtime++;
                printf("Incremented overtime is : %d\n",overtime);

                //Assignment operator
                Basic_Salary+=((10/100.0)*Basic_Salary);
                printf("Updated Basic Salary is : %2.f\n",Basic_Salary);

                printf("\nSalary calculated successfully!\n");
                break;
            }

            case 3:
            {
                //Calculating overtime pay
                int overtime_pay=250*overtime;

                //Calculating gross salary
                float gross_salary=Basic_Salary+overtime_pay;

                //Calculate tax amount
                float tax_amount=gross_salary*Tax/100.0;

                //Calculate salary
                float net_salary=gross_salary-tax_amount;

                printf("\n--------------------------------------------------------\n");
                printf(" EMPLOYEE SALARY SLIP\n");
                printf("--------------------------------------------------------\n");
                printf("\n");

                //printing values
                printf("Employee name is : %s\n",name);
                printf("Employee ID is : %d\n",ID);
                printf("Employee performance score is : %d\n",perform);
                printf("Employee Tax : %2.f\n",Tax);
                printf("Employee Updated Basic Salary is : %2.f\n",Basic_Salary);
                printf("Employee overtime pay is : %d\n",overtime_pay);
                printf("Employee gross salary is : %2.f\n",gross_salary);
                printf("Employee tax amount is : %2.f\n",tax_amount);
                printf("Employee net salary is : %2.f\n",net_salary);

                printf("\n");
                printf("Thank you for your commitment to this company, your contributions are deeply appreciated!\n");
                break;
            }

            case 4:
            {
                //conditional operator use
                int bonus=(perform>=80)?5000:2000;

                printf("\nBonus is: %d\n",bonus);

                //Relational Operator
                if(perform>=85)
                {
                    printf("1\n");
                }
                else
                {
                    printf("0\n");
                }

                //logical operator
                printf("\n");

                if(perform>=90&&bonus>0)
                {
                    printf("1 and reward granted\n");
                }
                else
                {
                    printf("0 and reward not granted\n");
                }
                break;
            }

            case 5:
                //Modulus Operator
                if(ID%2==0)
                {
                    printf("\nID is an even ID\n");
                }
                else
                {
                    printf("\nID is an odd ID\n");
                }
                break;

            case 6:
                printf("\nExiting program. Thank you!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please enter a valid choice.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&continueMenu);

    }while(continueMenu=='y'||continueMenu=='Y');

    printf("\nThank you for your commitment to this company, your contributions are deeply appreciated!\n");

    return 0;
}