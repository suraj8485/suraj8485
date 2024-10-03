#include<stdio.h>
void main()
{
int a,b,x,y,total,i;

for(i=0;i<4;i++){
    scanf("%d %d",&x,&y);/*x is a minute to solve the problem A and y is a minute to solve the problem B */
    a=500;
    b=1000;
  int firstAthenB,firstBthenA;
  int total;
  firstAthenB=(a-2*x)+(b-4*(x+y));//x for reduce 2 and for 4 evry single minute
  firstBthenA=(b-4*y)+(a-2*(x+y));
  total=(firstAthenB>firstBthenA)?firstAthenB:firstBthenA;
  printf("%d",total);
}
}
