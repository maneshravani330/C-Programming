#include <stdio.h>

// Function prototype
int sum(int, int);

int main() {
    int num1, num2, s;

    printf("\n Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    s = sum(num1, num2);  // Correct function call

    printf("\n Sum = %d", s);
    
    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}

op:-
Enter 2 numbers:  5 7
Sum = 12
