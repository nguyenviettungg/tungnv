#include<stdio.h>
main()
{
	int var, *ptr_var;
	ptr_var = &var;
	var=500;
	printf("\nvar value is %d",var);
	printf("\nAddress of var value is %x",ptr_var);
	printf("\nAddress plus 1 of var value is %x",++ptr_var);
	
	double varD, *ptr_varD;
	ptr_varD=&varD;
	varD=123456.7890;
	printf("\n\nvar value is %.2lf",varD);
	printf("\nAddress of var value is %x",ptr_varD);
	printf("\nAddress minus 1 of var value is %x",--ptr_varD);
	
	char varC, *ptr_varC;
	ptr_varC=&varC;
	varC='C';
	printf("\n\nvar value is %c",varC);
	printf("\nAddress of var value is %x",ptr_varC);
	printf("\nAddress plus 1 of var value is %x",++ptr_varC);
}
