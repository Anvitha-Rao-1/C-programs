#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; int magic=0; int non_magic=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // use arr[i] exactly like before
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        int temp=arr[i];
       if(temp%9==1){
        printf("%d is Magic\n",temp);
        magic++;
       }else{
        printf("%d is NOT Magic\n",temp);
        non_magic++;
       }
    }

    free(arr); // always free what you malloc
    return 0;
}