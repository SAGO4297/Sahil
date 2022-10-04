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
	printf("paise = ps %d\n",c.paisa());

	money d = m - p;
	d.print();
	printf("paise = ps %d\n",d.paisa());

}
