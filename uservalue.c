#include <stdio.h>  // Correct header file

int main() {
    int num;  // Declare an integer variable

    printf("\n Enter a number: ");
    scanf("%d", &num);  // Corrected scanf

    printf("\n You entered: %d", num);  // Display the entered number
    return 0;
}

op:-
Enter a number: 5
You entered: 5
