#include<stdio.h>
#include<math.h>

double AreaRect(double length, double breadth,double* perimeter,double* diagonal)
{
	double a=length*length+breadth*breadth;
	*diagonal=sqrt(a);
	*perimeter=(2*length)+(2*breadth);
	return length*breadth;
}

int main()
{
	double a,b,c,d,e;
	printf("Enter the dimensions of Rectangle = ");
	scanf("%lf %lf",&a,&b);
	c=AreaRect(a,b,&d,&e);
	printf("The area of Rectangle is %lf and perimeter is %lf\n and length of diagonal is %lf",c,d,e);
}
