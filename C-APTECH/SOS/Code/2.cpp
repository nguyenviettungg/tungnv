#include<stdio.h>
#include<stdlib.h>
main()
{
	int opt;
	void question1();
	void question2();
	while(true)
	{
	printf("\n\n1. Question1 ");
	printf("\n2. Question2 ");
	printf("\n3. Quit Program ");
	
		printf("\nEnter an option:");
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
				printf("\nInvalid number.Pls re-enter");
		}
	}
}
void question1()
{
	
}
void question2()
{
	
}
