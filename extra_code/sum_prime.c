#include<stdio.h>
int is_prime(int n) {
    int count=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            count++;
        }
    }
    if(count==2) {
        return 1;
    }
    return 0;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=2;i<=n;i++) {
        if(is_prime(i)) {
            sum+=i;
        }
    }
    printf("Sum of prime numbers up to %d is: %d\n",n,sum);
    return 0;
}