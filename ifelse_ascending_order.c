//accept any 3 numbers and display in ascending order
#include <stdio.h>
int main()
{ int a,b,c,t;
       printf("enter any three numbers ");
       scanf("%d%d%d",&a,&b,&c);
       
    if(a>b)
    t=a,a=b,b=t;
    
    if(a>c)
    t=a,a=c,c=t;
    
    if(b>c)
    t=b,b=c,c=t;
    
    printf(" ascending order is %d %d %d",a,b,c);
    
}
    
    
