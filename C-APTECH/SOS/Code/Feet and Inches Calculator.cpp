#include<stdio.h>
#include<conio.h>
main()
{
      float c, f, i;
      printf("\n Enter number Centimeters : \n");
      scanf("%f",&c);
      i = c/2.54;
      f = i/12;
      printf("\n %8.1f Centimeters is %8.1f Inches",c,i);
      printf("\n %8.1f Centimeters is %8.1f Feet",c,f);
      getch();
}
