#include<stdio.h>
#include<math.h>

int check_prime(int num){
    int copy=num; int count=0;
    for(int i=1;i<=num;i++){
        if(copy%i==0){
            count++;
        }
    }
    if (count==2){
        return 1;
    }
    return 0;
}

int check_arms(int num){
    int count_digits=0;
    int sum=0;
    int cpy=num;
    int cpy2=num;

    while(cpy!=0){
        int r=cpy%10;
        count_digits++;
        cpy/=10;
    }

    while(cpy2!=0){
        int r=cpy2%10;
        sum+=(int)round(pow(r, count_digits));
        cpy2/=10;
    }

    if(sum==num){
        return 1;
    }
    return 0;

}

int main(){
    int n;int sum=0;
    printf("Enter range of values: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(check_arms(i) && check_prime(i))
        {
            printf("%d ", i);
            sum += i;
        }
    }
    if(sum==0){
        printf("sorry no armstrong numbes/prime in this range\n");
    }else{
        printf("Sum is %d", sum);
    }
    return 0;
}