#include<cstdio>
#include"empclass.h"

int main(void)
{
	Employee S;
	int age,empid;
	double salary;
	float exhrs;
	printf("Enter employee id, age, salary & extra hours \n");
	scanf("%d%d%lf%f",&empid,&age,&salary,&exhrs);
	S.Entry(empid,age,salary,exhrs);
	printf("The gross salary annually of employee = %lf\n",S.AnnualIncome());
}
