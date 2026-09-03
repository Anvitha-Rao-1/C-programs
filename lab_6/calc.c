#include <stdio.h>

int main() {
int choice,num1,num2,num;

do {
printf("\n-----SELECT FROM THE MENU-----\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Square\n");
printf("6. Cube\n");
printf("7. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("--------------------------------------------------------\n");

if (choice == 7) {
break;
}

// Input handling
if (choice>= 1&&choice<=4) {
printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);
} else if (choice==5||choice==6){
printf("Enter a number: ");
scanf("%d",&num);
}

// Switch
switch(choice) {
case 1:
printf("Sum of the entered numbers is: %d\n",num1 + num2);
break;
case 2:
printf("Subtraction of the entered numbers is: %d\n",num1 - num2);
break;
case 3:
printf("Multiplication of the entered numbers is: %d\n",num1 * num2);
break;
case 4:
if (num2 != 0) {
printf("Division of the entered numbers is: %d\n",num1 / num2);
} else {
printf("Error: Division by zero is not allowed.\n");
}
break;
case 5:
printf("Square of the entered number is: %d\n",num * num);

break;
case 6:
printf("Cube of the entered number is: %d\n",num * num * num);
break;
default:
printf("Invalid Choice\n");
break;
}
} while(choice!=7);

printf("\n-------------------------------------------------------\n");
printf("Program exited successfully\n");
return 0;
}