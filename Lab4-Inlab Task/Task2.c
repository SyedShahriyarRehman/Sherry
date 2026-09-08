#include <stdio.h>

int main() 
{
	int num1,num2,num3 ;
	printf("Enter First Number:");
	scanf("%d" , &num1 );
	printf("Enter Second Number:");
	scanf("%d" , &num2);
	printf("Enter Third Number:");
	scanf("%d" , &num3);
	if(num1> num2 && num3)
	{
	printf("Number 1 is the Largest ");
	} 
	else if(num2 > num3 && num1) 
	{
	printf("Number 2 is the largest ");
	}
	else
	{
	printf("Number 3 is the largest ");
	}
	return 0;
}
