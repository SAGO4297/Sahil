#include<stdio.h>

int main()
{
	float num1,num2;
	int choice;
	float result;
SOS:
	printf("Enter two number: ");
	scanf("%f %f",&num1,&num2);
        printf("Press\n 1. for addition\n 2. for sub\n 3. for multi\n 4. for div\n");
	scanf("%d",&choice);
	switch (choice)
	{

	case 1: result=num1+num2;
		printf("%f\n",result);
		break; 
	case 2: result=num1-num2;
		printf("%f\n",result);
		break; 
	case 3: result=num1*num2;
		printf("%f\n",result);
		break; 
	case 4: result=num1/num2;
		printf("%f\n",result);
		break;
	}
	printf ("Do you wish to continue?\n Press 1 for YES\n Press 0 for NO\n");
	scanf("%d",&choice);
	if (choice==1)
		goto SOS;	
	return 0;
}
