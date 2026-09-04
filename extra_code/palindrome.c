#include<stdio.h>
int main(){
    int num, cpy, rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    cpy=num;
    while(cpy!=0){
        int r=cpy%10;
        rev=rev*10+r;
        cpy/=10;
    }
    if(rev==num){
        printf("%d is a palindrome number\n", num);
    }
    else{
        printf("%d is not a palindrome number\n", num);
    }
    return 0;
}