#include<stdio.h>

extern int revorder(int);

int main(void)
{
	int number;
	printf("Enter the number to be reversed \n");
	scanf("%d",&number);

	printf("The reversed number is %d\n", revorder(number));
}
