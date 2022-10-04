#include<stdio.h>
struct emptype
{
	short int empno;
	short int age;
	double sal;
	double comm;
};
typedef struct emptype employee;

void print_employee();
double GetGrossAnnualIncome(employee);

void print_employee(employee emp)
{
	printf("=====Employee details=====");
	printf("Employee ID is %hd\n",emp.empno);
	printf("Employee age is %hd\n",emp.age);
	printf("Employee salary is %lf\n",emp.sal);
	printf("Employee commission is %lf\n",emp.comm);
	printf("Gross Annual Income is %lf\n",GetGrossAnnualIncome(emp));
}

double GetGrossAnnualIncome(employee emp)
{
	double GAIncome=0;
	GAIncome=(emp.sal+emp.comm)*12;
	return GAIncome;
}

int main()
{
	employee emp={101,25,10000,500};
	print_employee(emp);
	return 0;
}
