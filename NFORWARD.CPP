#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
   void main()
  {
   int factorial(int);
   int n;
   float y[10],x,x0,xn,h=0,u=0,fact=0,c=0,t=0,sum=0,k=1,i,j;
   printf("Enter the number of intervals\n");
   scanf("%d",&n);
   printf("Enter the first and nth value of x\n");
   scanf("%f%f",&x0,&xn);
   printf("\n enter the function values:\n");

   for(i=0;i<=n;i++)
  {
    scanf("%f",&y[i]);
  }
   printf("\n Enter the unknown item");
   scanf("%f",&x);
   h=((x-x0)/n);
   u=((x-x0)/h);
   for(i=0;i<=n;i++)
   {
    for(j=n;j>i;j--)
    {
     y[j]=y[j]-y[j-1];
    }
   }
   for(i=0;i<=n;i++)
   {
    fact=factorial(i);
    c=k/fact;
    t=(c*y[i]);
    sum+=t;
    k=k*u;
    u=u-1;
   }
   printf("the function value of the unknown value is %f ",sum);
   getch();
   clrscr();
   }
   int factorial(int s)
   {
    if(s==0||s==1)
    return 1;
    else
    return(s*factorial(s-1));
   }

