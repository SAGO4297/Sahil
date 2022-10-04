#include <stdio.h>
int main()
{
	double interest=0.0;
	double principle=0.0;
        int period=0;
        float rate=0.0;
        printf("Welcome, Enter principle =");
        scanf("%lf",&principle);
        printf("\nEnter period=");
        scanf("%d",&period);
        printf("Enter interest rate");
        scanf("%f",&rate);
        
        interest=(principle*period*rate)/100;
        printf("The calculated interest is %f",interest);
      	return 0;
}
