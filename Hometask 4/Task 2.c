#include<stdio.h>
int main()
{
	int side1;
	int side2;
	int side3;
	printf("The sides of the Triangle are: ");
	scanf("%d %d %d", &side1 , &side2 , &side3);
	
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		printf("The Triangle is Valid\n");
		if (side1 == side2 && side2 == side3)
		{
			printf("The Triangle is Equilateral");
		}
		else if (side1 == side2 || side1 == side3 || side3 == side2 )
		{
			printf("The Triangle is Isosceles");
		}
		else 
		{
			printf("Your Triangle is Scalene");
		}
	}
	else 
	{
		printf("The Triangle is Invalid");
	}
	return 0;
}















