#include<stdio.h>
#include<stdlib.h>

int countDigits(int num){
    if(num==0) return 1;
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter elements for the Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int original=arr[i];
        long long sq=(long long)original*original;

        int digits=countDigits(original);
        long long split=1;
        for(int j=0;j<digits;j++) split*=10;

        long long right=sq%split;
        long long left=sq/split;
        long long sum=right+left;

        if(right!=0 && sum==original){
            printf("%d is a Kaprekar number\n",original);
        }else{
            printf("%d is NOT a Kaprekar number\n",original);
        }
    }

    free(arr);
    return 0;
}