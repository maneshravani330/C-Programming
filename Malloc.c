#include <stdio.h>
#include <stdlib.h>  // Added for malloc()

int main() {
    int *ptr, num;

    // Correct memory allocation
    ptr = (int*)malloc(10 * sizeof(int));  // Allocating memory for 10 integers
    if (ptr == NULL) {  // Check if malloc() was successful
        printf("\n Memory allocation failed!");
        return 1;
    }

    printf("\n Address of num = %p, ptr = %p", (void*)&num, (void*)ptr);  // Fixed %d to %p

    free(ptr);  // Free allocated memory
    return 0;
}

op:-
Address of num = 0x7ffd61882abc, ptr = 0x5d4c54c8d2a0