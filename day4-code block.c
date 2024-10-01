#include<stdio.h>
int main()
{
long int s,tx=0,ihs;
printf("enter the salary\n");
scanf("%ld",&s);
if(s>=100000){
    tx=100;
    ihs=s*(100-tx)/100;
    printf("your inhand salary is %d",ihs);
}else{
    ihs=s;
    printf("your inhand salary is %d",ihs);
}
return 0;
}

