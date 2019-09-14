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
	
}

void question2()
{
	
}
