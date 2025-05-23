#include <stdio.h>

int main() { 
    int num1, num2, num3, sum;
    float avg;

    do {
        printf("\n Enter 3 numbers (0,0,0 to Exit): ");
        scanf("%d%d%d", &num1, &num2, &num3);

        if ((num1 == 0) && (num2 == 0) && (num3 == 0))
            break;

        sum = num1 + num2 + num3;
        avg = (float)sum / 3;  // Calculate average correctly

        printf("\n Avg = %.2f", avg);
    } while (1);

    return 0;
}

op:-
Enter 3 numbers (0,0,0 to Exit): 10
20
30

 Avg = 20.00
 Enter 3 numbers (0,0,0 to Exit): 