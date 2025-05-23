#include <stdio.h>

// Function prototype
void display_array(int* ptr);

int main() {
    int arr[5] = {11, 42, 53, 74, 25};
    
    // Function call (with corrected name)
    display_array(arr);

    return 0;
}

// Function definition
void display_array(int* ptr) {
    int i;
    printf("\n ptr = %p", (void*)ptr); // Correct format for pointer address

    for (i = 0; i < 5; i++) {
        printf("\n arr[%d] = %d", i, *(ptr + i)); // Accessing array elements using pointer
    }

    // Moving pointer by 3 positions
    ptr = ptr + 3;
    printf("\n\n Value at ptr[-2] = %d", ptr[-2]); // Accessing the previous element
}

op:-
ptr = 0x7fff95b45560
 arr[0] = 11
 arr[1] = 42
 arr[2] = 53
 arr[3] = 74
 arr[4] = 25

 Value at ptr[-2] = 42