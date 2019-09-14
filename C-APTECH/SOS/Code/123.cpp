#include<stdio.h>
main()
{
	struct student
	{
		char name[25];
		int rollNo;
		float scienceMark;
		float mathMark;
		float englishMark;
	};
	int size;
	while(true)
	{
		printf("\nEnter a size of array:");
		scanf("%d",&size);
		if(size<100&&size>1)
		{
			break;
		}
		printf("Size is in from 1 to 100.Pls re-enter");
	}
	struct student arr_std[size];
	for(int i=0; i<size;i++)
	{
		printf("\n\nEnter a rollNo:");
		scanf("%d",&arr_std[i].rollNo);
		_flushall();
		printf("\nEnter Student's Name: ");
		gets(arr_std[i].name);
		printf("\n\tEnter Science Mark:");
		scanf("%f",&arr_std[i].scienceMark);
		printf("\n\tEnter Math Mark:");
		scanf("%f",&arr_std[i].mathMark);
		printf("\n\tEnter English Mark:");
		scanf("%f",&arr_std[i].englishMark);	
	}
	int sum = 0;
	for (int i=0; i<size; i++)
	{
		printf ("\nStudent's Information");
		printf("\n\tStudent's rollNo: %d", arr_std[i].rollNo);
		printf("\n\tStudent's Name: %s", arr_std[i].name);
		printf("\n\tScience mark: %f", arr_std[i].scienceMark);
		printf("\n\tMath mark: %f", arr_std[i].mathMark);
		printf("\n\tEnglish mark: %f ", arr_std[i].englishMark);
		sum=(arr_std[i].scienceMark + arr_std[i].mathMark + arr_std[i].englishMark);
	
		printf("\n\tTotal mark : %.2f ", sum);
		printf("\n\tAverage : %d ", sum/3);
		printf("\n");
	}
}
