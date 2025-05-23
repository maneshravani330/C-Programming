#include <stdio.h>
#include <stdlib.h>  // Required for malloc() and free()

int main() {
    int *ptr, num;
    
    // Allocating memory for a single integer
    ptr = (int *)malloc(sizeof(int));
    
    if (ptr == NULL) {  // Check if malloc() was successful
        printf("\n Memory allocation failed!");
        return 1;
    }

    printf("\n Address of num = %p, ptr = %p", (void*)&num, (void*)ptr);  // Corrected %d to %p
    
    *ptr = 50;  // Assigning value to allocated memory
    printf("\n Value of ptr = %d", *ptr);

    free(ptr);  // Free allocated memory
    printf("\n The End");

    return 0;
}

op:-
Address of num = 0x7ffce48f907c, ptr = 0x56abc3ff82a0
Value of ptr = 50
The End