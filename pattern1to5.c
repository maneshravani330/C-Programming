#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) {  // Fixed loop condition
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;
}

op:-
1
12
123
1234
12345
