#include<stdio.h>
int check_magic(int n){
    int cpy=n;
    int sum=0;
    while(cpy>9) {//while it is more than 2 digits
        sum=0; //initalise sum to zero
        while(cpy>0) { //cant be div by 0
            sum+=cpy%10; //extracting digit of cpy and adding it to sum
            cpy/=10;//removing the digit
        }
        cpy=sum;  //sum is the new cpy for the next loop
    }
    if(cpy==1) {
        return 1;
    }
    return 0;
}
int main(){
    int n; int sum=0;
    printf("Enter range for magic numbers: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int res=check_magic(i);
        if(res){
           sum+=i;
        }
    }
    printf("Sum of magic numbers up to %d is: %d\n",n,sum);
}