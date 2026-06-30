//sum of digits from 1 to 10
#include <stdio.h>
int main()
{ int n=1,sum=0;
   
   while(n<=10)
   {  sum=sum+n;
      n++;
   }
   printf("the sum is %d",sum);
}
