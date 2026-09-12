#include <stdio.h>
#include <ctype.h>
int main()
{
	char Character;
	printf("Enter a Character: ");
	scanf("%c", &Character);
	if (isalpha(Character))
	{
		char lowerch = tolower(Character);
	    switch (lowerch)
	    {
	    case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
	    case 'u' :
		    printf("%c is a vowel" ,Character);
		    break;
		
	    default :
	        printf("It is a consonant");	
       }
   }
   else 
   {
   	printf("Invalid Input");
   }
	return 0;
}
