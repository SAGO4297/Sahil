#include<stdio.h>
#include"strucy.h"

int main(void)
{
	employee e1;
	int no;
	printf("Enter the empid , salary and age of the employee \n");
	scanf("%d%lf%d", &e1.empno,&e1.sal,&e1.age);
	printf("Enter no of employees ");
	scanf("%d",&no);

	double Total= TotalSal(e1,no);
	printf("Total Salary bill is %lf",Total);
}
