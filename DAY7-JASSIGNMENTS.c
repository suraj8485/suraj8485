#include<stdio.h>
void main()
{
    int a,x;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&x);
        if(10-x>=3){
            printf("YES\n");
        }else{
        printf("NO\n");
        }
    }

}


