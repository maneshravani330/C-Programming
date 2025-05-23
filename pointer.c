#include <stdio.h>

int main() {
    int n1 = 10, n2 = 20;
    int *ptr;
    
    ptr = &n1;  // Pointer stores the address of n1

    printf("\n Address of n1 = %p", (void*)&n1);  // Use %p for addresses
    printf("\n Address of n2 = %p", (void*)&n2);
    printf("\n ptr (address stored) = %p", (void*)ptr);
    printf("\n Value at ptr = %d", *ptr);  // Dereferencing pointer to get value

    return 0;
}

op:-
 Address of n1 = 0x7ffeefbff5b8
 Address of n2 = 0x7ffeefbff5bc
 ptr (address stored) = 0x7ffeefbff5b8
 Value at ptr = 10
