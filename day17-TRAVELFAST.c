#include <stdio.h>

int main() {
	// your code goes here
int x,y,i;
scanf("%d",&i);
while(i--){
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("CAR\n");
    }else if(x<y){
        printf("BIKE\n");
    }else{
        printf("SAME\n");
    }
}
return 0;
}

