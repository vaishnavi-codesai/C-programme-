//accept any three numbers and display big number using logical operations
#include <stdio.h>  
int main()
 { int a,b,c,big;

   printf("enter any three numbers ");
   scanf("%d%d%d",&a,&b,&c);
   
   if(a>=b && a>=c)
      big=a;
   else
      if(b>=a && b>=c)
        big=b;
    else
        big=c;
    printf("big number=%d",a,b,c);
   
 }
