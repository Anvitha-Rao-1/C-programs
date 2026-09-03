#include<stdio.h>
int main(){

int i=2,num1, num2;
printf("Enter the range till where you want the even number of: ");
scanf("%d",&num2);

//while looping it
while(i<=num2){
if(i%2==0){
printf(" %d", i);
}
i++;
}
printf("\n Enter the starting range: ");
scanf("%d",&num1);
for(int j=num1; j<=num2; j++){
if(j%2==0){
printf(" %d",j);
}
}
printf("\n------------------------------------------------------- ");

return 0;
}