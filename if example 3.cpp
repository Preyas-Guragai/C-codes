// Program to display a number if it is negative

#include <stdio.h>
int main() {
	
    int number;

    printf("Enter an integer: ");
    
	 scanf("%d", &number);
    
	 if (number < 0)
	  {
        printf("You entered %d.\n", number);
    }
    return 0;
}
