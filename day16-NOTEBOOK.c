#include <stdio.h>

int main() {
	int b,i;
	float a;
	scanf("%d",&i);
	while(i--){
	    scanf("%f",&a);
	    b=(a*1000)/100;
	    printf("%d\n",b);
	}
return 0;
}

