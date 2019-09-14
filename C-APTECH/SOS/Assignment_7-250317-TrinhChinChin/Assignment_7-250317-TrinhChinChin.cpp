#include<stdio.h>
#include<stdlib.h>
main()
{
	int opt;
	void question1(void);
	void question2(void);
	while(true)
	{
		printf("\n\n1. Question 1");
		printf("\n2. Question 2");
		printf("\n3. Quit program");
		
			printf("\n\nEnter an option: ");
			scanf("%d",&opt);
			switch(opt)
			{
					case 1:
						question1();
						break;
					case 2:
						question2();
						break;
					case 3:
						exit(0);
					break;
					default:
						printf("\nInvalid number.Ple re-enter");
			}
	}
}
void question1()
{
	int Maxsize;
	int cntO=0,cntE=0;
	printf("\nEnter a maximun of an array: ");
	scanf("%d",&Maxsize);
	int arr[Maxsize];
	int i,max;
	for(i=0;i<Maxsize;i++)
	{
		printf("\nEnter a value for arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
		printf("\nPrint\n");
	for(i=0;i<Maxsize;i++)
	{
		printf("\nPrint a value for arr[%d]: %d \n",i,arr[i]);
	}	
	for(i=0;i<Maxsize;i++)
	{
	if(arr[i]%2==0)
		cntE++;
	else
		cntO++;
	}
		printf("\nThe number of Odd is: %d \n",cntO);
		printf("\nThe number of Even is: %d \n",cntE);
}
void question2()
{
	int size,k,sumk;
	
	printf("\nEnter number K: ");
	scanf("%d",&k);
	
	printf("\nEnter a size of array: ");
	scanf("%d",&size);
	int j;
	int arr[size];
	for(j=0;j<size;j++)
	{
		printf("\nEnter a arr[%d]: ",j);
		scanf("%d",&arr[j]);
	}
	sumk=0;
	for(j=0;j<size;j++)
	{
		if(arr[j]==k)//bi fail cho nay do ghi 1 dau =
		{
		sumk++;
		}	
	}
	printf("Number K appears in the array: %d",sumk);
}
