#include<stdio.h>
void main()
{
float cp,sp,c;
printf("enter the cost price and selling price.\n");
scanf("%f %f",&cp,&sp);
if(sp>cp){
c=sp-cp;
printf("your profit=%f",c);
}else{
c=cp-sp;
printf("your loss=%f",c);
}
}
