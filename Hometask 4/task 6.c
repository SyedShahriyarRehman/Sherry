#include <stdio.h>
int main()
{
	int choice;
	int num;
	int sqr;
	int isprime;
	printf("There are 4 choices in the menu,which are: \n1)Even/Odd \n2)Prime Number \n3)Square of that number \n4)Exit\n");
	printf("Enter Your Choice:");
	scanf("%d", &choice);
	printf("Enter Your Number: ");
	scanf("%d" , &num);
	
    switch(choice)
	{
		case 1:
		if (num % 2 == 0)
	    {
		    printf("%d is an even number", num);
	    }
	    else 
	    {
	      	printf("%d is a odd number", num);
	    }
	    break;
    case 2:
	    if (isprime <= 1)
	    {
		    isprime = 0 ;
	    } 
	   else if (isprime == 2 || isprime == 3 || isprime == 5 || isprime == 7 || isprime == 11 || isprime == 13)
	   {
	    	isprime = 1 ;
	   }
	   else if (isprime % 2 == 0 && isprime % 3 == 0)
	   {
	   	    isprime = 0 ;
	   }
	   else 
	   {
	        isprime = 1 ; // not a correct logic,this is not completely possible by if statement only,if it is i am unable to think of that 
	   }
	   break;
    case 3:
        sqr = num*num;
        printf("%d is the square of this number", sqr);
        break;
    case 4:
        printf("Exit");
	    break;
	
    default:
    	printf("Invalid choice");
    	break;	
	}

	return 0;	   
}
    
