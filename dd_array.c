#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&m);

     int arr1[n][m]; int arr2[n][m];

    //accepting elements for the first array
    printf("Enter elements for the first Array: ");
    for(int i=0;i<n;i++){ //rows
        for(int j=0;j<m;j++){ //colummn
            scanf("%d",&arr1[i][j]); //don't forget the & sign
        }
        printf("\n");
    }

    //accepting elements for the second array
    printf("Enter elements for the second Array: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr2[i][j]); //don't forget the & sign
        }
        printf("\n"); //not needed but good for clarity
    }
    //creating the resultant array
    int result[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //printing the first array
    printf("\n-------------------------------------------------------\n");
    printf("First Array: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
  printf("\n-------------------------------------------------------\n");
    //printing the second array
    printf("Second Array: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n-------------------------------------------------------\n");

    //printing the resultant array
    printf("Resultant Array: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
      printf("\n-------------------------------------------------------\n");

      //Sum of each row in array 1
    printf("Sum of each row in Array 1: \n");
    for(int i=0;i<n;i++){ //number of rows (row loop)
        int sum=0; //initalizing the sum variable to 0 for each row
        for(int j=0;j<m;j++){
            sum+=result[i][j];
        }
        printf("Sum of row %d: %d\n",i+1,sum);
    }
     printf("\n-------------------------------------------------------\n");

    //sum of each column in array 1
    printf("\nSum of each column in Array 1: \n");
    for(int j=0;j<m;j++){ //number of columns (column loop)
        int sum=0; //initalizing the sum variable to 0 for each column
        for(int i=0;i<n;i++){ //row loop
            sum+=result[i][j]; //row,col
        }
        printf("Sum of column %d: %d\n",j+1,sum);
    }
     printf("\n-------------------------------------------------------\n");

    //complexity (finding sum of diagonal elements-both ld and rd)
    int sum_diag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j)==(n-1))
            sum_diag+=result[i][j];
        }
    }
    printf("Sum of Diagonal Elements: %d", sum_diag);
     printf("\n-------------------------------------------------------\n");

    return 0;
}