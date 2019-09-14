#include<stdio.h>
int i,num;
main()
{
	int factorial(int);
	void prime(int);
	while(true)
	{
		printf("\nEnter a number [ Number >=2 ]: ");
		scanf("%d",&num);
		if(num<2)
		{
		printf("\n\tError.Pls re-enter.\n");
		}
		else
		{
			factorial(num);
			prime(num);
		}
	}
}
int factorial(int num)
{
	int f=1;
	for(int i=1;i<=num;i++)
	{
		f *= i;
	}
	printf ("\n\tFactorial of Number %d is [%d]",num, f);
	printf("\n");
}
void prime(int num)
{
	int cnt=0;
	for(int i=2; i<num; i++)
	{
		if(num%i==0&&num>2)
		cnt++;		
	}
	if(cnt==0)
	{
		printf("\n\tNumber %d is Prime ",num);
	}
	else
		printf("\n\tNumber %d is not Prime ",num);
	printf("\n");
}

