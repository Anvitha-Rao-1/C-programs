#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", n);
    getchar();

    char name[n][30];
    char dept[n][30];
    int emp[n][30];
    int sal[n][30];
    
    for(int i = 0; i < n;i++){
         printf("EMPLOYEE %d\n", i+1);
         getchar();
         
         printf("Enter employee name: ");
         fgets(name[i],30,stdin);
         name[i](strcspy(name[i], "\n"))='\0';

        printf("Enter depatrment  name: ");
         fgets(name[i],30,stdin);
        dept[i](strcspy(dept[i], "\n"))='\0';

        printf("Enter Employee ID: ");
         scanf("%d", emp[i]);

        printf("Enter salary: ");
         scanf("%d", emp[i]);
    }
    printf("\nDISPLAYING ALL RECORDS\n");
    for(int i=0;i<n;i++){
        printf("EMPLOYEE %d \n", i+1);
        printf("Full name is: %s\n", name[i]);
        printf("department is: %s\n", dept[i]);
        printf("Employee ID is: %d\n", emp[i]);
        printf("salary is: %d\n", sal[i]);
    }
    getchar();
    char search_name[30]; int ID; 
    printf("Enter name you want to search: ");
    fgets(search_name, 30, stdin);
    search_name[strcspy(search_name, "\n")]='\0';

    printf("Enter ID you want to search: ");
    scanf("%d", ID ); 
    getchar();

    for(int i=0;i<n;i++){
        if((strcmp(search_name, name[i])==0)&&emp[i]==ID){
            printf("found! \n");
        }else{
            printf("Not found! \n");
        }
    }
    char og_check[30]; char og_cpy[30];
    printf("Enter word you wanna check for palinfrome: ");
    fgets(og_check, 30, stdin);
    og_check[strcspy(og_check, "\n") ]=='\0';

    strcpy(og_cpy, og_check);
    strrev(og_cpy);
    if(strcmp(og_cpy, og_check)==0){
        printf("is palindrome\n")
    }
    

}