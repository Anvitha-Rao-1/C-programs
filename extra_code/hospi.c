#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter number of patients: ");
    int n;
    scanf("%d", &n);
    getchar();

    char first_name[n][30];char last_name[n][30];char category[n][30];int bill[n];

    for(int i=0;i<n;i++){
        printf("Enter for patient %d", i+1);
        printf("First name: ");
        fgets(first_name[i], 30, stdin);
        first_name[i][strcspn(first_name[i], "\n")]='\0'; 

        printf("Enter last name: ");
        fgets(last_name[i], 30, stdin);
        last_name[i][strcspn(last_name[i], "\n")]='\0'; 

        printf("Enter bill: ");
        scanf("%d", &bill[i]);
        getchar();
    }

    int flag=0;
    printf("enter last name you wanna search: ");
    char last[30];
    scanf("%s", last);
    for(int i=0;i<n;i++){
        if(strcasecmp(last_name[i], last)==0){
            printf("Found");
            flag=1; 

        }
    }
    char full_name[n][30]; 
    for(int i-0;i<n;i++){
        strcpy(full_name[i], first_name[i]);
        strcat(full_name[i], last_name[i]);
    }
   



}