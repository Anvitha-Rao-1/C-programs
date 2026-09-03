#include <stdio.h>

int main()
{
    int num;
    long long factorial = 1;

    printf("Enter the number you want to find the factorial of: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for(int j = num; j >= 1; j--)
        {
            factorial *= j;
        }

        printf("Factorial of %d is: %lld\n", num, factorial);

        printf("-------------------------------------------------------\n");

        printf("Fun Fact: 0! = 1 and factorials are used to find permutations "
               "(the total number of ways you can arrange something).\n");
    }

    return 0;
}