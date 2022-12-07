// program gratest among 3 number
#include<stdio.h>
void main()
{
 int a ,b,c ,d ;
printf("enter the 3 number");
scanf("%d%d%d",&a,&b,&c);
d=(a>b?(a>c?a:c):(b>c?b:c));
printf("greatest no. among 3 is= %d",d);
}