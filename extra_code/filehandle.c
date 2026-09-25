#include<stdio.h>
#include<string.h>

struct students{
    int marks, id;
    char name[100];
}student[3];
FILE *fp;
// FILE is a special type provided by C for handling files.
// fp means file pointer.
// You can think of fp as something that keeps track of the file we are currently working with.

void _read(){
    fp = fopen("anvitha.txt", "a");//imp
    for(int i=0;i<2;i++){
        printf(" \nEnter marks of student: ");
        scanf("%d", &student[i].marks );

        printf("\nEnter ID of student: ");
        scanf("%d", &student[i].id);

        printf("\nEnter name of student");
        scanf("%s",student[i].name);

        fprintf(fp, "%d %d %s\n", student[i].marks,student[i].id, student[i].name); //prints to file
    }
    fclose(fp);//close the handle

}

void print_file(){
    fp=fopen("anvitha.txt", "r");
    char ch;
    while((ch=fgetc(fp))!=EOF){ //brackets are important char is not needede
       putchar(ch);//putchar putchar putchar
    }
    fclose(fp);
}
int main(){
    _read(); print_file();
}