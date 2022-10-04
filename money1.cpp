#include<cstdio>
#include "money.h"

int main (void)
{
	int rs,ps;
	printf("Enter rupess / paise = ");
	scanf("%d%d", &rs, &ps);
	money m(rs,ps);

	printf("Enter rupess / paise = ");
	scanf("%d%d", &rs, &ps);
	money p(rs,ps);

	money c = m + p;
	c.print();

	money d = m - p;
	d.print();
	printf("%d",d.paisa());

}
