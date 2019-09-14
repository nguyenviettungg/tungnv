#include<stdio.h>
#include<stdlib.h>
int i;
int max,min;
int Maxsize,opt;
main()
{
	
	printf("\nEnter a maximun of an array: ");
	scanf("%d",&Maxsize);
	int arr[Maxsize];
	for(i=0;i<Maxsize;i++)
	{
		printf("\nEnter a value for arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int FindMax(int []);
	int FindMin(int []);

	printf("\nFisnished");
		while(true)
	{
		printf("\n\n1. Find the max number");
		printf("\n2. Find the min number");
		printf("\n3. Exit");
		
			printf("\n\nEnter an option: ");
			scanf("%d",&opt);
			switch(opt)
			{
					case 1:
						FindMax(arr);
						break;
					case 2:
						FindMin(arr);
						break;
					case 3:
						exit(0);
					break;
					default:
						printf("\nInvalid number.Ple re-enter");
			}
	}
}

int FindMax(int arr[])
{
	for(int i=1;i<Maxsize;i++)
	{
		max=arr[0];
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
		printf("\nThe max is %d",max);
}

int FindMin(int arr[])
{
		min=arr[0];	
	for(int i=1;i<Maxsize;i++)
	{

		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
		printf("\nThe min is %d",min);
}
