//accept any three numbers and display middle number
#include <stdio.h>
int main()
{int a,b,c,mid;
             printf("enter any three num ");
             scanf("%d%d%d",&a,&b,&c);
            if((a>b && a<c) || (a<b && a>c))
                mid=a;
            else
              if((b>a && b<c) || (b<a && b>c))
                mid=b;
               else 
                mid=c;
                
           printf("middle number is %d",mid);
}
          
