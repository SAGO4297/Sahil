#include<stdio.h>
double GetAvg(int a[],int size)
{
	register int count=0;
	double total=0;
	for(count=0;count<size;count++)
	{
		total=total+a[count];
	}
	return total/size;
}
int main()
{
	int marks[]={11,22,33,44,55};
	double avg_marks=GetAvg(marks,5);
	printf("Avg marks are %lf \n",avg_marks);
	return 0;
}
