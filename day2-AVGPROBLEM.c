#include <stdio.h>

int main() {
    int T, A, B, C;
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &A, &B, &C);  

    
        float average = (A + B) / 2.0;
        
        
        if (average > C) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

