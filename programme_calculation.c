// evaluate the expression p^4/k^3-s^2
#include <stdio.h>
#include <math.h>
int main()
{ int p,k,s,res;
   printf("enter any three numbers ");
   scanf("%d%d%d",&p,&k,&s);
   res=pow(p,4)/pow(k,3)-pow(s,2);
   printf("\nthe result is %d",res);
   
}

