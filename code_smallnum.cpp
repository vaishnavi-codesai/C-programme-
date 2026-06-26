//accept three numbers and display small number using '>' symbol
#include <stdio.h>
int main()
{ int a,b,c,small;
          printf("enter any three numbers ");
          scanf("%d%d%d",&a,&b,&c);
          
          if(a>b)
            if(b>c)
              small=c;
          else
            small=b;
          else
             if(a>c)
               small=c;
           else
               small=a;
        printf("the small number is %d ");
}
