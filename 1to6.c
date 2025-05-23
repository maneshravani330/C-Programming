#include <stdio.h>

int main() {
    int i, j;
    int cnt = 1; // Declare and initialize cnt properly

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", cnt);
            cnt++;
            if (cnt > 9) cnt = 1;
        }
        printf("\n");
    }
    
    return 0;
}

op:-
1
23
456
7891
23456
