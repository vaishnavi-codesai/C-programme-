 /*accept no of puri,dosa,bonda with respective costs and calculate the bill*/
#include <stdio.h>
#include <string.h>
int main()
 { int np,nd,nb,bill;
    printf("enter the cost of puri ");
    scanf("%d",&np);
    printf("enter the cost of dosa ");
    scanf("%d",&nd);
    printf("enter the cost of bonda ");
    scanf("%d",&nb);
    bill=np+nd+nb;
    printf("\t\tBILL\n");
    printf("\tcost of puri :%d\n",np);
    printf("\tcost of dosa :%d\n",nd);
    printf("\tcost of bonda:%d\n",nb);
    printf("\t\t-------------\n");
    printf("\tbill:%d\n",bill);
 }
