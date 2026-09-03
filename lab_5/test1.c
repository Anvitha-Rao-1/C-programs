/* Switch Case*/
#include <stdio.h>
int main(){
int choice;
printf("Enter your choice: \n");
printf("1. Deposit: \n");
printf("2. Withdraw: \n");
printf("3.balance: \n");
printf("4.exit: \n");
scanf("%d", &choice);
printf("\n------------------------------------------------\n");

switch(choice){
case 1:
printf("You chose to deposit money.\n");
break;
case 2:
printf("You chose to withdraw money.\n");
break;
case 3:
printf("You chose to check your balance.\n");
break;

case 4:
printf("You chose to exit the program.\n");
break;
default:
printf("Invalid choice.\n");
}
printf("\n------------------------------------------------\n");

return 0;
}