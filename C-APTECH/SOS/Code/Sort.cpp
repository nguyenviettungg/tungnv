#include<stdio.h>
main()
{
	int i,j,temp;
	char check='n';
	int arr[5]={16,90,25,23,9};
	for(i=0;i<5;i++)
	{
		for(j=0,check='n';j<i && check=='n';j++)//sorted
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				for(;i>j;i--)
				{
					arr[i]=arr[i-1];
				}
				arr[j]=temp;
				check='y';
			}
		}
	}
	printf("\nAfter insert sort\n");
	for(i=0;i<5;i++)
	{
		printf("\%d\n",arr[i]);
	}
	printf("\n");
}
