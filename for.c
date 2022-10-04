#include<stdio.h>
int main()
{
	register int row=1,col=1;
	int num=1;
	for (col=1;col<=10;col++)
	{
		for(row=1;row<=10;row++)
		{
			printf("%d\t",col);
			
		}
		printf("\n");
	}
        return 0;
}	
