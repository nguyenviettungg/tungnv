#include<stdio.h>
#include<stdlib.h>//(dùng cho exit tôn tai)
int i,j;

struct date
	{
	int day;
	int month;
	int year;
	};
	
struct ticket
	{
		char name[25];
		int price;
		struct date info;
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
	printf("\nEnter an option: ");
	
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
	int sumOdd=0;
	float sumOdd1=0;
	printf("Enter the size of an array: ");
	scanf("%d",&size);
	
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
		printf("Output the array: ");
		for(i=0;i<size;i++)
		{
			printf(" %d",arr[i]);
		}
		
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
			sumOdd++;
		}
	}
	printf("\nNumber of odd integers: %d",sumOdd);
	
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
			sumOdd1 =sumOdd1+arr[i];
		}
	}
	if(sumOdd1!=0)
	{
	printf("\nAverage of odd numbers: %.2f",sumOdd1/sumOdd);
	}
	else
	printf("\nNot odd numbers");
}

void question2()
{
	int num;
	printf("Enter the number of ticket: ");
	scanf("%d",&num);
	
	struct ticket tick[num];
	for(j=0;j<num;j++)
	{
		printf("Input for ticket %d: ",j+1);
		printf("\n");
		_flushall();
		printf("\tFilm: ");
		gets(tick[j].name);
		printf("\tPrice: ");
		scanf("%d",&tick[j].price);
		printf("\tDay: ");
		scanf("%d",&tick[j].info.day);
		printf("\tMonth: ");
		scanf("%d",&tick[j].info.month);
		printf("\tYear: ");
		scanf("%d",&tick[j].info.year);
	}
		printf("\nInformation of tickets: ");
		for(j=0;j<num;j++)
		{
			printf("\n\tFilm: %s",tick[j].name);
			printf("\n\tPrice: %d",tick[j].price);
			printf("\n\tDate: %d-%d-%d",tick[j].info.day,tick[j].info.month,tick[j].info.year);
			printf("\n");
		}
		
	
}
