#include <stdio.h>

int main()
{
	float x,y;
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%f %f",&x,&y);
	   
	   if((y/x)*100<50){
	       printf("NO\n");
	   }else{
	       printf("YES\n");
	   }
	}
return 0;
}

