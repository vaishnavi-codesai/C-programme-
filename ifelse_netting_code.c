#include <stdio.h>
#include <string.h>
int main()
{ char code;
  int budget; 
  printf("enter trip code p-picnic/o-others: ");
  fflush(stdin);
  scanf("%c",&code);
  
  printf("enter budget:\n ");
  scanf("%d",&budget);
  
  if(code=='p')
    if(budget>=10000)
     printf("eurekhaa");
     else
     printf("oops");
     
  else
   if(budget>20000)
   printf("enjoyed trip");
   else
   printf("worst trip");
   
}
