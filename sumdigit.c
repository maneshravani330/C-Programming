#include <stdio.h>

int main() {
    int num, sum, rem;
    num = 98765;

    do {
        sum = 0;  // Reset sum before each iteration
        while (num > 0) {
            rem = num % 10;  // Extract last digit
            sum += rem;       // Add to sum
            num /= 10;        // Remove last digit
        }
        num = sum;  // Assign sum back to num for the next iteration
    } while (sum > 9);  // Repeat until sum becomes a single-digit number

    printf("\nFinal sum (Digital Root) = %d", sum);
    return 0;
}

op:-
Final sum (Digital Root) = 8
