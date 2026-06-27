#include <stdio.h>
int main()
{int tenth,in;
  char gr;
        printf("enter marks of tenth,in,gr");
        scanf("%d%d%%d",&tenth,&in,&gr);
        printf("enter grade a/o  ");
        scanf("%c",&gr);
        
        
        if(tenth>=8 || in>=9 || gr=='a')
           printf("extrodinary student");
         else
           printf("normal student");
           
        
}
