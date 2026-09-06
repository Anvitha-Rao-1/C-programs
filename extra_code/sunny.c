#include<stdio.h>
#include<math.h>

//checking if the number is sunny or not
int check(int n){ //3
    int cpy=n+1; //3+1=4
    int sq_rt=sqrt(cpy); //sq_rt=2
    if(sq_rt*sq_rt==cpy){ 
        return 1;
    }
        return 0;
}

//read and write the array elements
int main(){
    int N;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("ENTER ELEMENTS FOR THE ARRAY: ");
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    printf("SUNNY NUMBERS IN THE ARRAY ARE: ");
    for(int i=0;i<N;i++){
        int ans=check(arr[i]);
        if(ans==1){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}