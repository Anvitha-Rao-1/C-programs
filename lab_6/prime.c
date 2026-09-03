#include<stdio.h>
int main(){

int check, c;
printf("Enter number to be checked: ");
scanf("%d",&check);
for(int i=1; i<=check ;i++){
if(check%i==0){
c++;
}
}
if(c==2){
printf("it is a prime number %d ", check);
}else{
printf("it is not prime number%d ",check);
}
return 0;

}