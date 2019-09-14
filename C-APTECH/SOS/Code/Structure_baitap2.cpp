#include<stdio.h>
main()
{
	struct student{
		int no;
		char name[25];
		float science_mark;
		float math_mark;
		float eng_mark;
	};
	int size;
	while (true)
	{
		printf("\nEnter a size of array: ");
		scanf("%d", &size);
		if (size <100 && size > 1)
		{
			break;
		}
		printf("\nSize is from 1 to 100, pls try....");
	}
	struct student arr_std[size];
	for (int i=0; i<size; i++)
	{
		printf("\n\nEnter No.: ");
		scanf("%d",&arr_std[i].no);
		_flushall();
		printf("\nEnter Student's Name: ");
		gets(arr_std[i].name);
		printf("\nEnter Science mark: ");
		scanf("%f", &arr_std[i].science_mark);
		printf("\nEnter Math mark: ");
		scanf("%f", &arr_std[i].math_mark);
		printf("\nEnter English mark: ");
		scanf("%f", &arr_std[i].eng_mark);
	}
	int sum = 0;
	float avr;
	for (int i=0; i<size; i++)
	{
		printf ("\nStudent's Information");
		printf("\n\tStudent's No: ", arr_std[i].no);
		printf("\n\tStudent's Name: ", arr_std[i].name);
		printf("\n\tScience mark: ", arr_std[i].science_mark);
		printf("\n\tMath mark: ", arr_std[i].math_mark);
		printf("\n\tEnglish mark: ", arr_std[i].eng_mark);
		sum= arr_std[i].science_mark + arr_std[i].math_mark + arr_std[i].eng_mark;
		avr = sum/3;
		printf("\n\tTotal mark ", sum);
		printf("\n\tAverage: ", avr);
		printf("\n");
	}
}
