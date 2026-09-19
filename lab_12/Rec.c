#include<stdio.h>

int r1=1;
int n4;
int r4=1;

/* 1. With reference variable concept */
void fact1(int n)
{
    if(n>0)
    {
        r1=r1*n;
        fact1(n-1);
    }
}

/* 2. No return type with parameter */
void fact2(int n,int r)
{
    if(n>0)
    {
        r=r*n;
        fact2(n-1,r);
    }
    else
    {
        printf("Factorial = %d\n",r);
    }
}

/* 3. With return type and parameter */
int fact3(int n)
{
    if(n<=1)
        return 1;

    return n*fact3(n-1);
}

/* 4. No return type and no parameter */
void fact4()
{
    if(n4>0)
    {
        r4=r4*n4;
        n4--;
        fact4();
    }
}

int main()
{
    int n,r3;

    printf("====================================\n");
    printf("       FACTORIAL USING 4 METHODS\n");
    printf("====================================\n");

    printf("Enter a number (0-12): ");

    if(scanf("%d",&n)!=1)
    {
        printf("Error: Invalid input!\n");
        return 0;
    }

    if(n<0||n>12)
    {
        printf("Error: Enter a number between 0 and 12.\n");
        return 0;
    }

    printf("\n------------------------------------\n");
    printf("1. WITH REFERENCE VARIABLE\n");
    printf("------------------------------------\n");

    fact1(n);
    printf("Factorial = %d\n",r1);

    printf("\n------------------------------------\n");
    printf("2. NO RETURN TYPE + PARAMETER\n");
    printf("------------------------------------\n");

    fact2(n,1);

    printf("\n------------------------------------\n");
    printf("3. RETURN TYPE + PARAMETER\n");
    printf("------------------------------------\n");

    r3=fact3(n);
    printf("Factorial = %d\n",r3);

    printf("\n------------------------------------\n");
    printf("4. NO RETURN TYPE + NO PARAMETER\n");
    printf("------------------------------------\n");

    n4=n;
    r4=1;
    fact4();

    printf("Factorial = %d\n",r4);

    printf("\n====================================\n");
    printf("          PROGRAM COMPLETE\n");
    printf("====================================\n");

    return 0;
}