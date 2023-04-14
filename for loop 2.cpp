#include<stdio.h>
int main(){
/*initially put sum zero in order to prevent error. if sum is not initially put 0, it assumes sum is 1 at first and
as a result there is always error of 1*/
int num, count, sum=0;
printf("enter the number:");
scanf("%d", &num);
for(count=0;count<=num; count++)
{
	sum+=count;
	}
	printf("the sum is: %d",sum);
return 0;



}

