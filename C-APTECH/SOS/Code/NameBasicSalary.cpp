#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int basic,loandet;
      char name;
      float daper,bonper,salary;
      printf("\n Enter Name , Basic , Daper , Bonper ,Loandet ");
      scanf("%c %d %f %f %d",&name,&basic,&daper,&bonper,&loandet);
      salary = basic + basic*daper/100 + bonper*basic/100 - loandet;
      printf("%c %d %f",name,basic,salary);
      getch();
}
