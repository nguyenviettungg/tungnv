#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c;
      printf("\n Nhap vao 3 so bat ky \n");
      scanf("%d %d %d",&a,&b,&c);
      if(a>b)
             {
             if(a>c)
             printf(" %d ",a);
             }
             else
                 if(b>c)
                        printf("%d",b);
                        else
                            printf("%d",c);
      getch();
}                     
