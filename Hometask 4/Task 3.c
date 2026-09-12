#include <stdio.h>
int main()
{
	int balance;
	int amount;
	int remainingbalance;
	printf("Enter Balance: ");
	scanf("%d" , &balance);
	printf("Enter your Withdrawal Amount: ");
	scanf("%d", &amount);
	
	remainingbalance = balance-amount;
	if (amount % 500==0 && amount<=balance && amount <= 25000)
	{
		printf("Your Withdrawal is Successful");
		printf("Your Remaining Balance is:%d " , remainingbalance);
	}
	else if (amount % 500 !=0)
	{
		printf("Your withdrawal is unsuccessful because your amount is not a multiple of 500");
	}
	else if (amount > balance)
	{
		printf("Your withdrawal is unsuccessful because your amount is higher than your balance");
	}
	else if (amount > 25000)
	{
		printf("Your withdrawal is unsuccessful because your amount has reached your daily limit of 25000");
	}
	
	return 0;
}

