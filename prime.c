#include <stdio.h>

int main() {
    int num, i, cnt = 0;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("\n %d is not a prime number.", num);
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                cnt++;
                break;  // No need to continue checking after finding one factor
            }
        }

        if (cnt == 0)
            printf("\n %d is a prime number.", num);
        else
            printf("\n %d is not a prime number.", num);
    }

    return 0;
}

op:-
Enter a number: 7

7 is a prime number.