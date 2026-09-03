#include<stdio.h>
#include <stdlib.h>
int main(){
      int n; int rev; int rev_sq; int rev3; int sq_of_normal; int sq_of_rev; int temp2;
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

    //loop to square the digits
    //  for(int i=0;i<n;i++){
    //    arr[i]=arr[i]*arr[i];
    // }

    //loop to check reverse
    for(int i=0;i<n;i++){
        int temp=arr[i]; //creating temp for the number;
        sq_of_normal=temp*temp; //square of the normal number in the array 12=144;
        rev=0; // initalising to 0 for each iteration
        while(temp!=0){  //reverseing normal number 12=21
            int r=temp%10;
            rev=rev*10+r;
            temp/=10;
        }
        int sq_of_rev=rev*rev;
        temp2=sq_of_rev; //squreing the reverse of the normal number 21=441
         rev_sq=0;
         while(temp2!=0){ //441=144=(sq_of_normal which is also 144)
            int r1=temp2%10;
            rev_sq=rev_sq*10+r1;
            temp2=temp2/10;
         }
        //  rev3=0; int temp3=rev_sq;
        //  while(temp3!=0){
        //     int r2=temp3%10;
        //     rev3=rev3*10+r2;
        //     temp3=temp3/10;
        //  }
         if(rev_sq==sq_of_normal){
             printf("its a Adam number");
         }else {
            printf("It is not an Adam number");
         }
    }

}

