#include<stdio.h>
#include<string.h>
int main(){
     int c=1;
    printf("Enter number of customers: ");
    int n;
    scanf("%d", &n);
    getchar();
  
    char first_name[n][20];
    char last_name[n][20];
    char category[n][20];
    char table_number[n][20];
    char full_name[n][20];
    for(int i=0;i<n;i++){

        printf("Enter details for customer %d", c);
        printf("Enter first name of customer: ");
        fgets(first_name[i], 20, stdin);
        printf("Enter last name of customer: ");
        fgets(last_name[i], 20, stdin);
        printf("Enter category of customer: ");
        fgets(category[i], 20, stdin);
        printf("Enter table_number of customer: ");
        fgets(table_number[i], 20, stdin);
        c++;
    }
    
    for(int i=0;i<n;i++){
         strcpy(full_name[i], first_name[i]);
         strcat(full_name[i], "\t");
         strcat(full_name[i], last_name[i]);
        }
    
         c=1;
    for(int i=0;i<n;i++){
         printf("Full name of customer %d is: %s\n", c, full_name[i]);
         printf("Category is: %s\n", category[i]);
         printf("Table number is: %s\n", table_number[i]);
         c++;

    }
    char search[50];
    printf("Enter customer name to be searched: ");
    fgets(search, 20, stdin);
    for(int i=0;i<n;i++){
        if(strcmp(full_name[i], search)==0){
            printf("Customer found! \n");
            break;
        }else{
            printf("Customer not founf \n");
        }
    }
    printf("Enter first name to be checked for palindrome: ");
    char palin_chack[20]; char copy[20];
    fgets(palin_chack,20,stdin);
    strcpy(copy,palin_chack);
    strrev(palin_chack);
    if(strcmp(palin_chack, copy)==0){
        printf("Yes it is palindrome number\n");
    }else{
        printf(" NOT palindrome number\n");
    }
}