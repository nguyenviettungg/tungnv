#include<stdio.h>
#include<stdlib.h>//(dùng cho exit tôn tai)
int i,temp;
struct product
	{
		int pro_no;
		char pro_name[25];
		int price;
	};
	
main()
{
	void question1();
	void question2();
	int opt;
	
	while(true)
	{
	printf("\n*************************************************");
	printf("\n*\t\t\t\t\t\t*");
	printf("\n*\t  Selecting appropriate action:\t\t*");
	printf("\n*\t  1.Question 1\t\t\t\t*");
	printf("\n*\t  2.Question 2\t\t\t\t*");
	printf("\n*\t  3.Quit program\t\t\t*");
	printf("\n*\t\t\t\t\t\t*");
	printf("\n*************************************************\n");
	
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
				printf("\nError. Pls re-enter ");
			
		}
	}
}
	
void question1()
{
	int size;
	int sumOdd,sumEven;
	printf("Enter a size of an array:");
	scanf("%d",&size);
	
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("\tEnter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
			sumOdd++;
		}
		else
		{
			sumEven++;
		}
	}
		if(sumOdd==size)
		{
			printf("\nAll odd numbers");	
		}
		else
			printf("\nAll not odd numbers");
}

void question2()
{
	int size1;
	printf("Enter a number of product: ");
	scanf("%d",&size1);
	
	struct product pd1[size1];
	
	for(i=0;i<size1;i++)
	{
		printf("\n\tEnter pro no %d  : ",i+1);
		scanf("%d",&pd1[i].pro_no);
		_flushall();
		printf("\tEnter pro name %d: ",i+1);
		gets(pd1[i].pro_name);
		printf("\tEnter price %d   : ",i+1);
		scanf("%d",&pd1[i].price);
	}
	
	int prono;	
	char check = 'n';
	char cont = 'n';
	
	while(cont == 'n')//phai co 2 dau =
	{
		printf("\n\n\tEnter pro no to search : ");
		scanf("%d",&prono);
	
			for(i=0;i<size1;i++)
			{
				if(pd1[i].pro_no == prono) 
				{
					printf("\n----------Information----------");
					printf("\n\n\tPro no   : %d ",prono);
					printf("\n\tPro name : %s",pd1[i].pro_name);
					printf("\n\tPrice    : %d",pd1[i].price);
					cont = 'y';
					check = 'y';
					break;
				}	
			}
			if(check == 'n') printf("\tError.Pls re-enter");
				printf("\n");
	}

	

}
