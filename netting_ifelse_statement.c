#include <stdio.h>
#include <string.h>
int main()
{ char mar;
  int eap;
  printf("enter inter marks a-good grader/o-others");
  fflush(stdin);
  scanf(" %c",&mar);
  printf("enter eapcet marks");
  scanf("%d",&eap);
      if (mar == 'a')
         if(eap>100)
            printf("super student");
        else 
            printf("good student");
        else
                 if(eap>100)
                     printf("lucky student");
                       else
                       printf("bad luck student");
}
