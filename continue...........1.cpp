#include<stdio.h>
int main(){
	int i;
	double num, sum=0.0;
	for(i=1; i<=9; i++)
 {
printf("enter n%d: ",i);
scanf("%lf",&num);
	
if(num<0.0){
	continue;
}
sum=sum+num;
}
printf("sum=%.21lf",sum);
}
