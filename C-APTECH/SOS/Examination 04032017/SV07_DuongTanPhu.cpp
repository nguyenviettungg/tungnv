#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct retang
{
	float wid;
	float hei;
	char color[10];
};
main()
{
	void quest1(), quest2();
	while (true)
	{
		int opt;
		for(int z=0; z<25; z++)
		{
			printf("%/\\");
		}
		printf("\n||\t\t\t\t\t\t||");
		printf("\n||  Selecting appropriate action:\t\t||");
		printf("\n||\t1. Question 1\t\t\t\t||");
		printf("\n||\t2. Question 2\t\t\t\t||");
		printf("\n||\t3. Quit.\t\t\t\t||");
		printf("\n||\t\t\t\t\t\t||");
		printf("\n");
		for(int z=0; z<25; z++)
		{
			printf("\\%/");
		}
		printf("\n");
		printf("\nChoose an option: ");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1:
				quest1();
				break;
			case 2:
				quest2();
				break;
			case 3:
				exit(0);
			default:
				printf("\n\t\tWrong option!");
		}
		printf("\n");
		printf("\npress <Enter> to return Menu.......");
		getch(); //su dung header conio.h
		system("cls");
	}
}
void quest1()
{
	printf("\n---------------Question 1-----------------");
	printf("\n");
	int num;
	while (true)
	{
		printf("\n> Enter a interger number [2-15]: ");
		scanf("%d", &num);
		if (num < 2 || num > 15)
		{
			printf("\n\t\tWrong, pls try....\n");
		}
		else break;

	}
	int fac = num;
	for (int i = 1; i<num; i++)
	{
		fac *= i;
	}
	printf("\nFactorial of %d is: %d\n", num, fac);
}
void quest2()
{
	printf("\n---------------Question 2-----------------");
	printf("\n");
	int size, size1, count = 0;
	float area, side;
	printf("\nEnter number of Rectangle: ");
	scanf("%d", &size);
	struct retang ret[size];
	for (int i=0; i<size; i++)
	{
		printf("\n> Enter Rectangle number %d\n", i+1);
		printf("\n\tEnter a width: ");
		scanf("%f", &ret[i].wid);
		printf("\n\tEnter a height: ");
		scanf("%f", &ret[i].hei);
		printf("\n\tEnter a color: ");
		scanf("%s", &ret[i].color);
	}
	printf("\n");

	printf("\n>>> List of Rectangles");
	for (int i=0; i<size; i++)
	{
		printf("\n\t%d. W = %.2f, H = %.2f, color = %s.", i+1, ret[i].wid, ret[i].hei, ret[i].color);
	}
	printf("\n");

	printf("\n>>> List of Square");
	for (int i=0; i<size; i++)
	{
		if (ret[i].hei == ret[i].wid)
		{
			side = ret[i].hei;
			area = ret[i].hei*ret[i].wid;
			printf("\n\t%d. Side = %.2f, Area = %.2f, color = %s.", i+1, side, area, ret[i].color);
			count++;
		}
		else continue;
	}
	printf("\n");
	if (count == 0)
	{
		printf("\n\t\tNot found!");
	}
	printf("\n");
}
