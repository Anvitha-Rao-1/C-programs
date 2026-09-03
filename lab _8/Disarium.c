#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
      int n; int c; int sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    c=n;

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
        int temp1=arr[i];int temp2=arr[i]; int c=0;
         while(temp1!=0){
            int digit=temp1%10;
            c++;
            temp1=temp1/10;
        }
        sum=0;
        while(temp2!=0){
            int digit=temp2%10;
            sum+=pow(digit,c);
            c--;
            temp2=temp2/10;
        }
        if(sum==arr[i]){
            printf("%d is a Disarium number \n",arr[i]);
        }else{
            printf("%d is not a Disarium number \n",arr[i]);
        }

    }

    }

