#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int size;
int i;
main()
{
	int opt;
	void question1();
	void question2();
	while(true)
	{
		printf("\n\n1. Question1 ");
		printf("\n2. Question2 ");
		printf("\n3. Exit program ");	
		printf("\nEnter an option: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1 :
				question1();
				break;
			case 2 :
				question2();
				break;
			case 3 :
				exit(0);
				break;
			default:
				printf("Invalid");	
		}	
	}
}
void question1()//Nhap vao 2 chuoi noi chuoi 1 vao duoi chuoi 2
{
 	char str1[20],str2[20];
 	_flushall();
 	printf("\nEnter a string 1: ");
 	gets(str1);
 	_flushall();
 	printf("\nEnter a string 2: ");
 	gets(str2);
 	strcat(str2,str1);//noi chuoi 1 noi vao duoi chuoi 2
	printf("\nConcat str1 with str2: \"%s\"",strcat(str2,str1));
	printf("\n");
}
void question2()
{
 	int size;
 	float ave;
 	int calAverage(int[]);//Nhap vao 1 mang
 	printf("\nEnter a size of array:  ");
 	scanf("%d",&size);
 	
 	int arrI[size];
 	for(i=0;i<size;i++)
 	{
 		printf("\nEnter arrI[%d]: ",i);
 		scanf("%d",&arrI[i]);
	}
	ave =calAverage(arrI);  //Khi goi chi ghi ten mang
	printf("\nThe average of array is %.2f \n",ave);
}
float calAverage(int arrI[])
{
 	float avg;
 	for(i=0;i<size;i++)
 	{
 		avg +=arrI[i];
	}
	avg = avg/size;//return avg/size; cung dc
	return(avg);
}
