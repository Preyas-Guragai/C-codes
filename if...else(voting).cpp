#include<stdio.h>
int main(){
 int age;
 printf("enter the age:");
 scanf("%d",&age);
 if(age<18)
 {
 
printf("you are not eligible for voting");
}
if(age>18)
{printf("You are eligible for voting");
}
return 0;


}
