#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	float p,s;
	printf("\nEnter a,b,c the edges of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=0 || b<=0 ||c<=0)
	{
		printf("\nError!!!");
	}
	if(a+b>c&&b+c>a&&a+c>b)
	{
		printf("\na,b,c is the edges of a triangle.");
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nArea of a triangle: %.2lf",s);
	}
	else printf("\na,b,c not the edges of a triangle.");
	
	return 0;
}
