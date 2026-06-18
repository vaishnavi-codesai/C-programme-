#include <stdio.h>
int main()
{ int m,n,p;
   m=100;
   n=20;
   p=10;
        m-=p;
        p-=5;
        n+=m;
        p+=m;
        p--;
        m--;
        n-=p;
        printf(" m=%d n=%d p=%d",m,n,p);
}
