#include<stdio.h>
extern int Countprime(int,int);
int main()
{
	int lower,upper;
	printf("Enter the lower limit =");
	scanf("%d",&lower);
	printf("\nEnter the upper limit =");
	scanf("%d",&upper);

	if(lower>upper)
	{
		printf("Invalid Entry!!!!\n");
		return 0;
	}

	printf("There are %d prime numbers between %d - %d\n",Countprime(lower,upper),lower,upper);

}	
