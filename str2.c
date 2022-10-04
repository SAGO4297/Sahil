#include<stdio.h>
struct emptype
{
	int empno;
	short age;
	double sal;
};
typedef struct emptype emp;

int main()
{
	emp e[3];
	register int count=0;
	for(count=0;count<3;count++)
	{
		printf("Enter the employee id\n");
		scanf("%d",&e[count].empno);
		printf("Enter the employee age\n");
		scanf("%hd",&e[count].age);
		printf("Enter the employee sale\n");
		scanf("%lf",&e[count].sal);
	}
	for (count=0;count<3;count++)
	{
		printf("Employee %d is %hd yr old and has salary Rs %lf\n",e[count].empno,e[count].age,e[count].sal);
	}
	return 0;
}
