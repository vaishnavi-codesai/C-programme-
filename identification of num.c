/*accept any two numbers and display big number*/
#include <stdio.h>
int main()
{ int a,b,big;
      printf("enter any two numbers ");
      scanf("%d%d",&a,&b);
      
      
      big=(a>b) ? a:b;
      printf("big number is %d",big);
}
