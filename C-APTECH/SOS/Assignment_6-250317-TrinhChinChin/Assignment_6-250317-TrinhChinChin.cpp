#include<stdio.h>
main()
{
	int num,p,k;
	while(true)
	{	
		printf("Enter a value number : ");
		scanf("%d",&num);
		if(num<2 || num>9)
		{
		printf("Error");
		}
		else
		for(k=1 ;k<10 ;k++)
		{
			p=num*k;
			printf("%d\tx\t%d\t=\t%d\n",num,k,p);
		}
		printf("\n");
	}
	
}
