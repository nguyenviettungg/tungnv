#include<stdio.h>
#include<stdlib.h>//(dùng cho exit tôn tai)
int i,temp;
struct product
	{
		char code[25];
		char name[25];
		int price;
		int quality;
		int total;
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
	int i,num;
	int n1=1,n2=1;
	int n3=n1+n2;
	printf("Enter a num to print Fibonacci: ");

	scanf("%d",&num);;
	printf("\n%d\t%d",n1,n2);
	while(n3<=num)
	{
		printf("\t%d",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	printf("\n");
	printf("\nFinished\n");
}

void question2()
{
	int size;
	printf("Enter a maximun of products: ");
	scanf("%d",&size);
	
	struct product arr_pro[size];
	
	for(i=0;i<size;i++)
	{
		printf("\nInput product %d ",i+1);
		_flushall();
		printf("\n\tCode: ");
		gets(arr_pro[i].code);
		printf("\tName: ");
		_flushall();
		gets(arr_pro[i].name);
		printf("\tPrice: ");
		scanf("%d",&arr_pro[i].price);
		printf("\tQuality: ");
		scanf("%d",&arr_pro[i].quality);
		arr_pro[i].total=arr_pro[i].price*arr_pro[i].quality;
	}
	
	printf("\n------------Product Details-----------");
	printf("\n");
	printf("Code\t\tName\tPrice\tQuality\t\tAmount");
	for(i=0;i<size;i++)
	{
	printf("\n%s\t\t%s\t%d\t%d\t\t%d",arr_pro[i].code,arr_pro[i].name,arr_pro[i].price,arr_pro[i].quality,arr_pro[i].total);	
	}
	
	for(i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr_pro[i].total > arr_pro[j].total)
			{
			temp=arr_pro[i].total;
			arr_pro[i].total=arr_pro[j].total;
			arr_pro[j].total=temp;
			}
		}	
	}
	printf("\nThe most total amount product");
	printf("\nCode: %s",arr_pro[i].code);
	printf("\nName: %s",arr_pro[i].name);
	printf("\nPrice: %d",arr_pro[i].price);
	printf("\tQuality: %d\tAmount: %d",arr_pro[i].quality,arr_pro[i].total);
}
