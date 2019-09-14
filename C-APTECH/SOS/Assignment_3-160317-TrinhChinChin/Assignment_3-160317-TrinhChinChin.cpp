#include<stdio.h>
#include<conio.h>
main()
{
	float c,i,f;
	printf("\nEnter number centimeters : \n");
	scanf("%f",&c);
	i=c/2.54;
	f=i/12;
	printf("\n Inches : %.1f",i);
	printf("\n Feet : %.1f",f);
	getch();
}
