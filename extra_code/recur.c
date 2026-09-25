#include<stdio.h>
#include<string.h>

int isMagic(int n){
    if(n<=9){
        if(n==1){
            return 1;
        }
        else{
            return 0;
        }
    }

int sum=0; //initalising to 0
while(n>0){
    sum=sum+b%10;
    n=n/10;
}
return isMagic(sum) //sending the number as sum this time
}

 //strong

 int fact(int n){
    if(n==0||n==1)
    return 1;

    return n*n-1;
 }

 int factsum(int n){
    if(n==0){
        return 0;
    }
    return fact(n%10)+factSum(n/10);
 }