static int Isprime(int n)
{
	int m=0;
	if (n==1)
		return 0;
	if (n==2 || n==3)
		return 1;
	if((n%2)==0)
		return 0;
	for(m=3;m*m<=n;m+=2)
	{
		if(n%m==0)
			return 0;
	}
			return 1;
}

int Countprime(int first,int last)
{
	register int term,count=0;
	for(term=first;term<=last;term++)
	{
		count+=Isprime(term);
	}
	return count;
}
