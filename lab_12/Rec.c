#include<stdio.h>

int ans=1;

void calculate1(int num,int *ans)
{
    if(num>0)
    {
        printf("%d ",num);
        *ans=*ans*num;
        calculate1(num-1,ans);
    }
}

void calculate2(int num,int value)
{
    if(num>0)
    {
        value=value*num;
        calculate2(num-1,value);
    }
    else
    {
        printf("Factorial = %d\n",value);
    }
}

int calculate3(int num)
{
    if(num<=1)
    {
        return 1;
    }

    return num*calculate3(num-1);
}

int count=5;
int ans4=1;

void calculate4()
{
    if(count>0)
    {
        ans4=ans4*count;
        count--;
        calculate4();
    }
}

/* Extra recursion: Sum of numbers */
int sum(int num)
{
    if(num<=0)
    {
        return 0;
    }

    return num+sum(num-1);
}

int main()
{
    int fact=1;

    printf("Method 1:\n");
    calculate1(5,&fact);
    printf("\nFactorial = %d\n",fact);

    printf("\nMethod 2:\n");
    calculate2(5,1);

    printf("\nMethod 3:\n");
    int answer=calculate3(5);
    printf("Factorial = %d\n",answer);

    printf("\nMethod 4:\n");
    calculate4();
    printf("Factorial = %d\n",ans4);

    printf("\nSum using Recursion:\n");
    int total=sum(5);
    printf("Sum = %d\n",total);

    return 0;
}