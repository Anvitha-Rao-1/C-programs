#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter number of data to enter: ");
    int n;
    scanf("%d",&n);
    char title[n][20];
    char author[n][20];
    char category[n][20];
    char bookID[n][20];
    for(int i=0;i<n;i++){
        printf("Enter title of book %d: \n ",i+1);
        fgets(title[i],20,stdin);
        printf("Enter author of book %d: ",i+1);
        fgets(author[i],20,stdin);
        printf("Enter category of book %d: ",i+1);
        fgets(category[i],20,stdin);
        printf("Enter book ID of book %d: ",i+1);
        fgets(bookID[i],20,stdin);
    }
    printf("\nEntered book details:\n");
    for(int i=0;i<n;i++){
        printf("Book %d:\n",i+1);
        printf("Title: %s",title[i]);
        printf("Author: %s",author[i]);
        printf("Category: %s",category[i]);
        printf("Book ID: %s",bookID[i]);
    }
    printf("\nEnter book ID to search: ");
    char searchID[20];
    scanf("%s",searchID);
    for(int i=0;i<n;i++){
       if(strcmp(bookID[i],searchID)==0){
          printf("Book found:\n");
          printf("Title: %s",title[i]);
          printf("Author: %s",author[i]);
          printf("Category: %s",category[i]);
          printf("Book ID: %s",bookID[i]);
       }
       else{
          printf("Book not found.\n");
       }
    }
    char cpy[20]; char copy[20]; char rev[20];
    printf("Enter book name to check palindome: ");
    fgets(cpy,20,stdin);
    strcpy(copy,cpy);
   strrev(copy);
    if(strcmp(copy,rev)==0){
        printf("The book name is a palindrome.\n");
    }
    else{
        printf("The book name is not a palindrome.\n");
    }
}