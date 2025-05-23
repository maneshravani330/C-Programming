#include <stdio.h>

int main() {
    int i, n, t = 0;
    
    printf("\n Enter number of terms: ");
    scanf("%d", &n);

    printf("\nSeries: ");
    for (i = 1; i <= n; i++) {
        t = t + i;
        printf("%d ", t);  // Added space for better readability
    }
    
    printf("\n");  // Newline for better output formatting
    return 0;
}

op:-
Enter number of terms: 5

Series: 1 3 6 10 15
