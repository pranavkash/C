#include <stdio.h>
int main() 
{
	int opt;
	int balance=1000,amount;
	printf("\t \t \t:::WELCOME TO BANK:::\n");

	printf("1.Withdraw\n2.Deposit\n3.Balance\n4.Exit\n");
	printf("Select an option:");
	scanf("%d",&opt);
	if(opt==1)
	{
		printf("\t \t You have selected Withdraw \n");
		printf("please enter the amount to withdraw:");
		scanf("%d",&amount);
		if(amount < balance){
			balance -= amount;
			printf("Withdrawal of %d succesfull \n Updated balance amount: %d\n",amount,balance);
		}
		else{
			printf("insufficient balance in the account");
		}
	}

	if(opt==2)
	{
		printf("\t\tYou have selected Deposit\n");
		printf("enter the amount to deposit:");
		scanf("%d",&amount);
		balance += amount;
		printf("Updated balance is : %d",balance);
	}
	if (opt==3){
		printf("\t\tYou have selected to check balance\n");
		printf("Account balance is : %d",balance);
	}

}
