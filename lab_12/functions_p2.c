#include<stdio.h>

int choice,num1,num2,num,res,sum_fact;

int add(int a,int b)
{
    return a+b;
}

int square(int n)
{
    return n*n;
}

void evenOdd(int n)
{
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void display()
{
    printf("Hello 1BCA A\n");
}

int getNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}

int sumFactorial(int num1){
	int sum=1;
	for(int i=num1;i>0;i--){
		sum*=i;
	}
	return sum;
}

void disp_array(){
	int arr[50];
	for(int i=0;i<50;i++){
		arr[i]=i+1;
	}
	for(int j=0;j<50;j++){
		if(arr[j]%3==0){
			arr[j]=0;
		}
	}
	printf("Expected Output:\n");
	for(int i=0;i<50;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void displayMessage(){
	printf("\n--- MENU SELECTION ---\n");
	printf("1. Add \n");
	printf("2. Square \n");
	printf("3. evenOdd \n");
	printf("4. Display \n");
	printf("5. Read and return a number \n");
	printf("6. Sum of factorials \n");
	printf("7. Array_multiple3 \n");
	printf("8. Exit Program \n");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	printf("\n");

	switch(choice){
		case 1:
			printf("You chose to add two numbers\n");
			printf("Enter first number: ");
			scanf("%d",&num1);
			printf("Enter second number: ");
			scanf("%d",&num2);
			printf("Sum is: %d\n",add(num1,num2));	
			break;
		
		case 2:
			printf("You chose to find square of two numbers\n");
			printf("Enter number to find square of: ");
			scanf("%d",&num1);
			res=square(num1);
			printf("Square is: %d\n",res);
			break;
		
		case 3:
			printf("Enter number to check is it even or odd number: ");
			scanf("%d",&num1);
			evenOdd(num1);
			break;
		
		case 4:
			display();
			break;
		
		case 5:
			num=getNumber();
			printf("Number is: %d\n",num);
			break;
		
		case 6:
			printf("Enter number to find factorial: ");
			scanf("%d",&num1);
			sum_fact=sumFactorial(num1);
			printf("Factorial of %d is: %d\n",num1,sum_fact);
			break;
			
		case 7:
			disp_array();
			break;
			
		case 8:
			printf("Exiting program. Goodbye!\n");
				
		default:
			printf("Wrong option \n");
	}
}

int main(){
	while(1){
		displayMessage();
	}
	return 0;
}
