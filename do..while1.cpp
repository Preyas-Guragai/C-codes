// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum); //here .2 before lf is entered, so the output will be 2 digits after decimal i.e 0.02, otherwise 
  //more than 2 decimals will be in the output i.e 0.000000222

  return 0;
}
