#include<stdio.h>
int main()
{
	int number;
	register int count=1;
	printf("Enter the num for m table\n");
	scanf("%d",&number);
	for(count=1;count<=10;count++)
	{
		printf("%d * %d = %d\n",number,count,number*count);
	}
	return 0;
}
