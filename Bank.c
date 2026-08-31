#include <stdio.h>
int main(){
int choice; float bal=20000;float amount;

//accepting values from user
printf("========== ATM MENU ==========\n");

printf("1.Balance Inquiry\n");
printf("2.Deposit\n");
printf("3.Withdraw\n");
printf("4.Block card (debit/credit card)\n");
printf("5.Exit\n");
printf("==============================\n");
scanf("%d",&choice);

// switch case for different choices

switch(choice){
case 1://check balance case
printf("Your balance is: %f",bal);
break;
case 2://deposit case
printf("You chose to deposit money.\n");
int num;
printf("==============================\n");
printf("1.Cash Deposit\n");
printf("2.Cheque Deposit\n");
printf("==============================\n");
scanf("%d",&num);
printf("------------------------\n");
switch(num){
case 1:
printf("You chose Cash Deposit.\n");

printf("Enter amount to be added: \n");
scanf("%f",&amount);
bal+=amount;
printf("Your new balance is: %2.f",bal);
break;
case 2:
printf("You chose Cheque Deposit.\n");
printf("Enter amount to be added: \n");
scanf("%f",&amount);
bal+=amount;
printf("Your new balance is: %2.f",bal);
break;
default:
printf("Invalid choice.\n");
}
break;
case 3://withdraw case
printf("You chose to withdraw money.\n");
printf("==============================\n");
printf("1. Savings\n");
printf("2. Current\n");
printf("==============================\n");
int acc_type;
scanf("%d",&acc_type);
printf("Enter amount to be withdrawn: \n");
scanf("%f",&amount);

if(amount<=bal){
bal-=amount;
printf("Your new balance is: %2.f",bal);
}
else{
printf("Insufficient balance.\n");
}
break;
case 4:
printf("You chose to block your card.\n");
printf("Our customer service will contact you shortly.\n");
break;
case 5:
printf("You chose to exit the program.\n");
break;
default:
printf("Invalid choice.\n");
}
printf("\n------------------------------------------------\n");
printf("Thank you for using our ATM service.\n");
return 0;
}