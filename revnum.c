int revorder(int num)
{
	int sum=0;
	do
	{
	int a = num % 10;
	sum=sum*10+a;
	num/=10;
	}while(num>0);
	return sum;
}
