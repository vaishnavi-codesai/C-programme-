 //accept any four digit num and sisplay sum of the digits
 #include <stdio.h>
 #include <math.h>
 int main()
 { int num,d1,d2,d3,d4,d5,sum;
    printf(" enter any four digit number ");
    scanf(" %d",sum);
    d1=num/10;
    d2=d1%10;
    d3=d2%10;
    d4=d2%10;
    d5=d2%10;
    sum=d3+d4+d5; 
    printf("sum of the digits is %d",sum);
 }
 
