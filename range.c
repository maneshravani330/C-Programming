#include <stdio.h>
#include <math.h> // Needed for sqrt()

int main() {
    int n1, n2, num, i, isPrime;

    printf("\n Enter range (n1 and n2): ");
    scanf("%d%d", &n1, &n2);

    printf("\n Prime numbers between %d and %d are:\n", n1, n2);

    for (num = n1; num <= n2; num++) {
        if (num < 2) // Skip numbers less than 2 (not prime)
            continue;

        isPrime = 1; // Assume it's prime

        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}

op:-
Enter range (n1 and n2): 10 20

Prime numbers between 10 and 20 are:
11 13 17 19 