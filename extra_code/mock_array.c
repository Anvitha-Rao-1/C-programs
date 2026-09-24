#include<stdio.h>

int even_odd(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
}
void largest_smallest(int m, int n, int arr[m][n]){
    
    int largest=arr[0][0];
    int smallest=arr[0][0];

    for(int i=1;i<m;i++){
         for(int j=1;j<n;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
         }
    }

    for(int i=1;i<m;i++){
         for(int j=1;j<n;j++){
            if(arr[i][j]<smallest){
                smallest=arr[i][j];
            }
         }
    }

    printf("\n Largest number is: %d", largest);
    printf("\nSmallest Number is: %d",smallest);
}

void count(int m, int n, int arr[m][n]){
int c_zero=0,c_pos=0,c_neg=0;


  for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
          if(arr[i][j]==0){
            c_zero++;
          }else if(arr[i][j]>0){
            c_pos++;
          }else{
             c_neg++;
          }
      }
  }

  printf("\n number of positive numbers are %d:", c_pos);
  printf("\n number of negative numbers are %d:", c_neg);
  printf("\n number of zero numbers are %d:", c_zero);
}

int count_element(int m, int n, int arr[m][n]){

 int s; int count_ele=0;

 printf("\nWhich number do you want to search? :");
 scanf("%d", &s);

 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j] == s){
            count_ele++;
        }
    }
 }

 return count_ele;
}

int main(){
    int m,n;
   
    printf("\nEnter m value: ");
    scanf("%d", &m);
    printf("\nEnter n value");
    scanf("%d", &n);
    
    int arr[m][n];
    printf("\nEnter elements for the array");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }

/* Check even or odd */

    printf("\n\nEven/Odd result:");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(even_odd(arr[i][j]) == 1)
            {
                printf("\n%d is Even", arr[i][j]);
            }
            else
            {
                printf("\n%d is Odd", arr[i][j]);
            }
        }
    }


    /* Find largest and smallest */

    largest_smallest(m, n, arr);


    /* Count positive, negative and zero */

    count(m,n,arr);


    /* Search element */

    int result = count_element(m,n,arr);

    printf("\nThe number occurs %d times.", result);


    return 0;
}