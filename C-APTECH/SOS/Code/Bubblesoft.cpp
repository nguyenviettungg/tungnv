#include<stdio.h>
main()
{
	int i,j,temp;
	int arr[5]={23,90,16,9,25};
	
	for(i=3;i>=0;i--)
	{
		for(j=4;j>=4-i;j--)
		{
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
	printf("\nAfter sort: \n");
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
		printf("\n");
	}
}
