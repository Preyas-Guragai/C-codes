#include<stdio.h>
int main()
{
	int number;
	printf("enter the number between 1 to 7: ");
	scanf("%d",&number);
	
	switch(number)
	{
		   case 2:
		   case 3:
		   case 4:
			case 5:
			case 6:
         printf("working day");
		   break;				
			  	  	
			case 1:
	    	case 7:
		   printf("weekend");
			break;
		   						
		   default:
		   printf("invalid number");
			}
		  	return 0;
		   					
			}
