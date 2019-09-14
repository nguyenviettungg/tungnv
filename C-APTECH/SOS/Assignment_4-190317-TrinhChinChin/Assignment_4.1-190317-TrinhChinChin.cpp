#include<stdio.h>
#include<conio.h>
main()
{
      int basic, daper;
      float salary, bonper,loandet;
      char name[20];
      _flushall();
      printf("\nEnter the Name: ");
      scanf("%s",name);
      printf("\nEnter the Basic: ");
      scanf("%d",&basic);
      printf("\nEnter the Daper: ");
      scanf("%d",&daper);
      printf("\nEnter the Bonper: ");
      scanf("%f",&bonper);
      printf("\nEnter the Loandet: ");
      scanf("%f",&loandet);
      
      salary = basic + basic*daper/100 + bonper*basic/100 - loandet;
      
      printf("\nName %s\t Basic %d\t Salary %.3f$ ",name,basic,salary);
      getch();
}

      
