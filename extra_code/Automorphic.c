#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); //25 and 625
    int sq=num*num; //625 in sq
    int cpy=num; 
    int count=0;
    while(cpy!=0){
        count++;
        cpy/=10;
    }
    int power=pow(10,count); //10^2=100
    if(sq%power==num){
        printf("%d is an automorphic number\n", num);
    }
    else{
        printf("%d is not an automorphic number\n", num);
    }
}