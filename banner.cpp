#include"banner.h"
#include<cstdio>

double BannerPrice(banner info, int copies)
{
	float rate = copies<5?:0.75;
	return copies * rate * info.Area();
}

int main(void)
{
	banner nom;

	float x,y;
	printf("Banner Dimensions: ");
	scanf("%f%f",&x,&y);
	int n;
	printf("Number of copies: ");
	scanf("%d",&n);

	nom.Resize(x,y);

	printf("Total price of regular banner: %.2lf\n",BannerPrice(nom,n));
}
