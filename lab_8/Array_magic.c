#include<stdio.h>

int main()
{
    int n,i;
    int magic=0,non_magic=0;
    int smallest=0,largest=0;
    int start,end;
    int range_magic=0;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid array size!\n");
        return 0;
    }

    int arr[n];

    printf("\nEnter the elements:\n");

    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);

        if(scanf("%d",&arr[i])!=1)
        {
            printf("Invalid input!\n");
            return 0;
        }
    }

    printf("\n==================================\n");
    printf("       ANALYSIS RESULTS\n");
    printf("==================================\n");

    /* Find magic numbers */
    for(i=0;i<n;i++)
    {
        if(arr[i]>0&&arr[i]%9==1)
        {
            printf("%d is a Magic Number\n",arr[i]);
            magic++;

            if(smallest==0||arr[i]<smallest)
                smallest=arr[i];

            if(arr[i]>largest)
                largest=arr[i];
        }
        else
        {
            printf("%d is NOT a Magic Number\n",arr[i]);
            non_magic++;
        }
    }

    /* Smallest and largest magic number */
    printf("\n==================================\n");
    printf("       MAGIC NUMBER DETAILS\n");
    printf("==================================\n");

    if(magic>0)
    {
        printf("Smallest Magic Number: %d\n",smallest);
        printf("Largest Magic Number : %d\n",largest);
    }
    else
    {
        printf("No Magic Numbers found in the array.\n");
    }

    /* Range */
    printf("\n==================================\n");
    printf("     MAGIC NUMBERS IN RANGE\n");
    printf("==================================\n");

    printf("Enter starting value: ");
    scanf("%d",&start);

    printf("Enter ending value: ");
    scanf("%d",&end);

    if(start>end)
    {
        printf("Invalid range!\n");
    }
    else
    {
        printf("\nMagic numbers from %d to %d:\n",start,end);

        for(i=start;i<=end;i++)
        {
            if(i>0&&i%9==1)
            {
                printf("%d ",i);
                range_magic++;
            }
        }

        if(range_magic==0)
            printf("No Magic Numbers found.");

        printf("\n");
    }

    /* Final report */
    printf("\n==================================\n");
    printf("          FINAL REPORT\n");
    printf("==================================\n");

    printf("Total Elements : %d\n",n);
    printf("Magic Numbers  : %d\n",magic);
    printf("Non-Magic       : %d\n",non_magic);
    printf("Range Magic Nos : %d\n",range_magic);

    printf("==================================\n");

    return 0;
}