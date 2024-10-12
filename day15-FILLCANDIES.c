#include <stdio.h>

int main() {
	int i,a,b,c,d;//a=total number of candies,b=number of pocket in a bag and c=number of candies carry in one pocket.
	scanf("%d",&i);
for(;i>0;i--){
    scanf("%d %d %d",&a,&b,&c);
    d=b*c;
    if(a%d==0){
        printf("%d\n",a/d);
    }else{
        printf("%d\n",a/d+1);
    }
}
return 0;
}

