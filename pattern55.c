#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {  // Fixed condition to print 5 rows
        for (j = 1; j <= 5; j++) {  // Fixed condition to print 5 stars in each row
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

op:-
*****
*****
*****
*****
*****
