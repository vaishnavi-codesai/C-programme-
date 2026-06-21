 //calculate the exprression a^2+b^2-2ab
 #include <stdio.h>
 #include <math.h>
 void main()
 { int a,b,res;
    printf("enter any two values ");
    scanf("%d%d",&a,&b);
    res=pow(a,2)+pow(b,2)-2*a*b;
    printf("\n result is %d",res);
 }   
