//accept any 3 numbers and display the nearest numberto the first number
#include <stdio.h>
int main()
{ int a,b,c,d1,d2,near;
      printf("enter any three numbers ");
      scanf("%d%d%d",&a,&b,&c);
      
      d1=a-b;
      if(d1<0)
         d1=-d1;
         
       d2=a-c;
       if(d2<0)
          d2=-d2;
          
      if(d1<d2)
        near=b;
       else
         near=c;
    printf("the near number is %d",near);
}
