#include<stdio.h>
int main(){

int i=1,num;
printf("Enter the number you want to find the multiplication table of: ");
scanf("%d",&num);

//while looping it
while(i<=10){
printf("%d * %d = %d \n", num,i, (num*i));
i++;
}

printf("------------------------------------------------------- ");

return 0;
}