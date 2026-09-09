#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    int id = 0;
    int age = 0;

    char first_name[30] = "";
    char last_name[30] = "";
    char full_name[70] = "";

    char gender;
    char medical_D[30] = "";

    int beds = 100;
    int occupied_beds = 30;

    int critical_count = 0;
    int non_critical_count = 0;

    char critical_status[20];

    do
    {
        printf("\n");
        printf("=========================================================\n");
        printf("             HOSPITAL MANAGEMENT SYSTEM\n");
        printf("=========================================================\n");

        printf(" 1. Add Patient Record\n");
        printf(" 2. View Patient Details\n");
        printf(" 3. Analyze Patient Name\n");
        printf(" 4. Classify Patient by Age\n");
        printf(" 5. Copy Patient Name\n");
        printf(" 6. Compare Patient Names\n");
        printf(" 7. Search Character in Name\n");
        printf(" 8. Search Medical Department\n");
        printf(" 9. Generate Patient Code\n");
        printf("10. Book Appointment\n");
        printf("11. Hospital Dashboard\n");
        printf("12. Display Name Word by Word\n");
        printf("13. Exit\n");

        printf("=========================================================\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        getchar();

        switch(choice)
        {

            /* =================================================
               CASE 1 : ADD PATIENT
               ================================================= */

            case 1:
            {
                printf("\n");
                printf("========================================\n");
                printf("         ADD PATIENT RECORD\n");
                printf("========================================\n");

                printf("Enter Patient ID : ");
                scanf("%d", &id);
                getchar();

                printf("Enter First Name : ");
                fgets(first_name, sizeof(first_name), stdin);

                first_name[strcspn(first_name, "\n")] = 0;

                printf("Enter Last Name : ");
                fgets(last_name, sizeof(last_name), stdin);

                last_name[strcspn(last_name, "\n")] = 0;

                printf("Enter Age : ");
                scanf("%d", &age);

                getchar();

                printf("Enter Department : ");
                fgets(medical_D, sizeof(medical_D), stdin);

                medical_D[strcspn(medical_D, "\n")] = 0;

                printf("Enter Gender (M/F) : ");
                scanf("%c", &gender);

                getchar();

                printf("Critical or NonCritical : ");
                scanf("%s", critical_status);

                /* Create full name */
                strcpy(full_name, first_name);
                strcat(full_name, " ");
                strcat(full_name, last_name);

                /* Count critical / non-critical patients */
                if(strcmp(critical_status, "Critical") == 0 ||
                   strcmp(critical_status, "critical") == 0)
                {
                    critical_count++;
                }
                else
                {
                    non_critical_count++;
                }

                /* Increase occupied beds */
                if(occupied_beds < beds)
                {
                    occupied_beds++;
                }

                printf("\nPatient Added Successfully!\n");

                break;
            }


            /* =================================================
               CASE 2 : VIEW PATIENT DETAILS
               ================================================= */

            case 2:
            {
                printf("\n");
                printf("========================================\n");
                printf("          PATIENT DETAILS\n");
                printf("========================================\n");

                printf("Patient ID    : %d\n", id);
                printf("Name          : %s\n", full_name);
                printf("Age           : %d\n", age);
                printf("Gender        : %c\n", gender);
                printf("Department    : %s\n", medical_D);

                break;
            }


            /* =================================================
               CASE 3 : ANALYZE PATIENT NAME
               ================================================= */

            case 3:
            {
                int vowels = 0;
                int consonants = 0;
                int spaces = 0;

                int len = strlen(full_name);

                for(int i = 0; i < len; i++)
                {
                    char ch = full_name[i];

                    if(ch == 'A' || ch == 'E' || ch == 'I' ||
                       ch == 'O' || ch == 'U' ||
                       ch == 'a' || ch == 'e' || ch == 'i' ||
                       ch == 'o' || ch == 'u')
                    {
                        vowels++;
                    }

                    else if((ch >= 'A' && ch <= 'Z') ||
                            (ch >= 'a' && ch <= 'z'))
                    {
                        consonants++;
                    }

                    else if(ch == ' ')
                    {
                        spaces++;
                    }
                }

                printf("\n");
                printf("========================================\n");
                printf("        NAME ANALYSIS REPORT\n");
                printf("========================================\n");

                printf("Name        : %s\n", full_name);
                printf("Characters  : %d\n", len);
                printf("Vowels      : %d\n", vowels);
                printf("Consonants  : %d\n", consonants);
                printf("Spaces      : %d\n", spaces);

                break;
            }


            /* =================================================
               CASE 4 : AGE CLASSIFICATION
               ================================================= */

            case 4:
            {
                printf("\n");
                printf("========================================\n");
                printf("         AGE CLASSIFICATION\n");
                printf("========================================\n");

                if(age < 18)
                {
                    printf("Patient Category : CHILD\n");
                }
                else if(age < 60)
                {
                    printf("Patient Category : ADULT\n");
                }
                else
                {
                    printf("Patient Category : SENIOR CITIZEN\n");
                }

                break;
            }


            /* =================================================
               CASE 5 : COPY PATIENT NAME
               ================================================= */

            case 5:
            {
                char copied_name[70];

                strcpy(copied_name, full_name);

                printf("\nCopied Name : %s\n", copied_name);

                break;
            }


            /* =================================================
               CASE 6 : COMPARE PATIENT NAMES
               ================================================= */

            case 6:
            {
                char name1[70];
                char name2[70];

                printf("Enter First Name : ");

                getchar();

                fgets(name1, sizeof(name1), stdin);
                name1[strcspn(name1, "\n")] = 0;

                printf("Enter Second Name : ");

                fgets(name2, sizeof(name2), stdin);
                name2[strcspn(name2, "\n")] = 0;

                if(strcmp(name1, name2) == 0)
                {
                    printf("Names are SAME\n");
                }
                else
                {
                    printf("Names are DIFFERENT\n");
                }

                break;
            }


            /* =================================================
               CASE 7 : SEARCH CHARACTER
               ================================================= */

            case 7:
            {
                char search_char;
                int found = 0;

                printf("Enter Character : ");
                scanf(" %c", &search_char);

                for(int i = 0; i < strlen(full_name); i++)
                {
                    if(full_name[i] == search_char)
                    {
                        found = 1;
                        break;
                    }
                }

                if(found)
                {
                    printf("Character Found\n");
                }
                else
                {
                    printf("Character Not Found\n");
                }

                break;
            }


            /* =================================================
               CASE 8 : SEARCH MEDICAL DEPARTMENT
               ================================================= */

            case 8:
            {
                char medical_depart[5][20] =
                {
                    "Cardiology",
                    "Neurology",
                    "Orthopedics",
                    "Pediatrics",
                    "Oncology"
                };

                char search_department[30];
                int found = 0;

                getchar();

                printf("Enter Department : ");

                fgets(search_department,
                      sizeof(search_department),
                      stdin);

                search_department[
                    strcspn(search_department, "\n")
                ] = 0;

                for(int i = 0; i < 5; i++)
                {
                    if(strcmp(search_department,
                              medical_depart[i]) == 0)
                    {
                        found = 1;
                        break;
                    }
                }

                if(found)
                {
                    printf("Department Available\n");
                }
                else
                {
                    printf("Department Not Found\n");
                }

                break;
            }


            /* =================================================
               CASE 9 : GENERATE PATIENT CODE
               ================================================= */

            case 9:
            {
                char patient_code[20];

                sprintf(patient_code,
                        "HMS-%c-%04d",
                        gender,
                        id);

                printf("\nGenerated Patient Code : %s\n",
                       patient_code);

                break;
            }


            /* =================================================
               CASE 10 : BOOK APPOINTMENT
               ================================================= */

            case 10:
            {
                char appointment_date[15];

                printf("Enter Appointment Date (DD/MM/YYYY): ");
                scanf("%s", appointment_date);

                printf("\n");
                printf("========================================\n");
                printf("      APPOINTMENT CONFIRMED\n");
                printf("========================================\n");

                printf("Patient : %s\n", full_name);
                printf("Date    : %s\n", appointment_date);

                break;
            }


            /* =================================================
               CASE 11 : HOSPITAL DASHBOARD
               ================================================= */

            case 11:
            {
                printf("\n");
                printf("========================================\n");
                printf("        HOSPITAL DASHBOARD\n");
                printf("========================================\n");

                printf("Total Beds         : %d\n", beds);

                printf("Occupied Beds      : %d\n",
                       occupied_beds);

                printf("Available Beds     : %d\n",
                       beds - occupied_beds);

                printf("----------------------------------------\n");

                printf("Critical Patients  : %d\n",
                       critical_count);

                printf("Non-Critical       : %d\n",
                       non_critical_count);

                printf("----------------------------------------\n");

                printf("Occupancy Rate     : %.2f%%\n",
                       ((float)occupied_beds / beds) * 100);

                break;
            }


            /* =================================================
               CASE 12 : DISPLAY NAME WORD BY WORD
               USING strtok()
               ================================================= */

            case 12:
            {
                char name_copy[70];
                char *word;

                /* Copy full name because strtok() modifies the string */
                strcpy(name_copy, full_name);

                /* Get first word */
                word = strtok(name_copy, " ");

                printf("\n");
                printf("========================================\n");
                printf("       PATIENT NAME WORDS\n");
                printf("========================================\n");

                /* Print each word */
                while(word != NULL)
                {
                    printf("%s\n", word);

                    /* Get next word */
                    word = strtok(NULL, " ");
                }

                break;
            }


            /* =================================================
               CASE 13 : EXIT
               ================================================= */

            case 13:
            {
                printf("\n");
                printf("========================================\n");
                printf("     THANK YOU FOR USING HMS\n");
                printf("========================================\n");

                break;
            }


            /* =================================================
               DEFAULT : INVALID CHOICE
               ================================================= */

            default:
            {
                printf("\nInvalid Choice!\n");

                break;
            }
        }

    } while(choice != 13);

    return 0;
}