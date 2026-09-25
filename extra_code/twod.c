#include<stdio.h>

int main(){
    int m,n;

    printf("\nEnter rows: ");
    scanf("%d", &m);
    printf("\nEnter column: ");
    scanf("%d", &n);

    int arr[m][n];
    printf(" \nEnter elements in the array\n ");
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nARRAY IS\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0)

}