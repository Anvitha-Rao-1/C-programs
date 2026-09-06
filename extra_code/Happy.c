#include<stdio.h>

//function to check if the number is happy or not
int check(int n){
    int sum=0;
    while(n>9){
        sum=0;
        while(n>0){
            int r=n%10;
            sum+=r*r;
            n/=10;
        }
        n=sum;
    }
    if(n==1)
        return 1;
    else
        return 0;
}

int main(){
    int N;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("ENTER ELEMENTS FOR THE ARRAY: ");
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    printf("HAPPY NUMBERS IN THE ARRAY ARE: ");
    for(int i=0;i<N;i++){
        if(check(arr[i])==1){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
