#include<stdio.h>
int main()
{
	float weight;
	float height;
	float BMI;
	printf("Enter Your Weight in KG: ");
	scanf("%f" , &weight);
	printf("Enter Your height in meters: ");
	scanf("%f" , &height);
	BMI = weight/(height*height);
	printf("Your BMI is:%0.2f " , BMI);
	
	if (BMI < 18.5)
	{
		printf("Your Category is:Underweight");
	}
	else if (BMI>=18.5 && BMI<=24.9)
	{
		printf("Your Category is:Normal");
	}
	else if (BMI>=25 && BMI<=29.9)
	{
		printf("Your Category is:Overweight");
	}
	else
	{
		printf("Your Category is:Obese");
	}
	
	return 0;
}
