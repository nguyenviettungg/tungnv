#include<stdio.h>
#include<conio.h>
main()
{
      int m1,m2,m3;
      float p;
      
      while(true)
      {
      printf("\nEnter three grade of 3 subjects: ");
      scanf("%d %d %d",&m1,&m2,&m3);
      p = (m1 + m2 + m3)/3;
      
      if(p<0 || p>100)
      {
      printf("\nError");
      }
                 else if(p<50)
                      {
                      printf("\nThe grade is Fail");
                      }
                       else if(p<61)
                       {
                       printf("\nThe grade is B+");
                       }
                        else if(p<71)
                        {
                        printf("\nThe grade is A");
                        }
                         else if(p<81)
                         {
                         printf("\nThe grade is A+");
                         }
                          else if(p<91)
                          {
                          printf("\nThe grade is E");
                          }
                           else
                           {
                           printf("\nThe grade is E+");
                           }
      }
      getch();
}

      
