#include<stdio.h>
int main(void)
{
	long int num,sum=0;
	
	printf("Enter number = \n");
	scanf("%ld",&num);

	do
	{
	int a = num % 10;
	sum=sum*10+a;
	num/=10;
	}while(num>0);
	printf("The reverse number is %ld",sum);
}
