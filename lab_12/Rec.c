#include<stdio.h>

int ans=1;
//Method 1uses recursion, pinters, a variable value
//no return type with parameters
void calculate1(int num,int *ans) //* indicates pointers(store address rather than values)
{
    if(num>0) //get val stored at the address contained in num
    {
        printf("%d ",num); //prints 5,4,3,2,1
        *ans=*ans*num; //multiples the current answer by the current numebr
        calculate1(num-1,ans); //calls same function again with num=4
    }
}

//no ret type, with variable
void calculate2(int num,int value) //value=1
{
    if(num>0) //if >0 then calc factorial
    {
        value=value*num;
        calculate2(num-1,value); //recursive call
    }
    else
    {
        printf("Factorial = %d\n",value);
    }
}

int calculate3(int num) //one parameter
{
    if(num<=1) //if its less than or = to 1 then int gets 1 and rec stops
    {
        return 1;
    }

    return num*calculate3(num-1); //5*(calculate3(4)
}

int count=5;
int ans4=1;

void calculate4()
{
    if(count>0)
    {
        ans4=ans4*count;
        count--;
        calculate4(); //calls itself after dec by 1
    }
}

/* Extra recursion: Sum of numbers */
int sum(int num)
{
    if(num<=0) //when number reaches 0, rec stops
    {
        return 0;
    }

    return num+sum(num-1); //recursive case: sum(5)=5+sum(4)
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