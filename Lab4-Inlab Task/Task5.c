#include <stdio.h>

int main() 
{
	int num1;
	char operators;
	int num2;
	printf("Enter Number 1: ");
	scanf("%d" , &num1);
	printf("Enter a Operator: ");
	scanf(" %c" , &operators);
	printf("Enter Number 2: ");
	scanf("%d" , &num2);
	
	switch(operators)
	{
		case '+':
		    printf("Your reuslt is:%d ", num1+num2);
	 	    break;
		case '-':
		    printf("Your reuslt is:%d ", num1-num2);
		    break;
		case '*':
		    printf("Your reuslt is:%d ", num1*num2);
		    break;
		case '/':
			if(num2==0)
			{
				printf("Error");
			}
			else
			{
				printf("Your reuslt is:%d ", num1/num2);
			}
		    
		    break;
	}
	
	
	return 0;
}
