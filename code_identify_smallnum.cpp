//accept any three numbers and show small number with condition b<c
#include <stdio.h>
int main()
{ int a,b,c,small;
            printf("enter any three numbers ");
            scanf("%d%d%d",&a,&b,&c);
            
            if(b<c)
              if(b<a)
               small=b;
               else
               small=a;
            else
               if(c<a)
                  small=c;
               else
                   small=a;
          printf("the small number is %d",small);
                   
   
}
