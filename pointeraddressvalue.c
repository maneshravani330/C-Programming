#include <stdio.h>

int main() { 
    char n1 = 'a', n2 = 'b';
    char *ptr;
    
    ptr = &n1;  // Pointer stores address of n1

    printf("\n Address of n1 = %p", (void*)&n1);
    printf("\n Address of n2 = %p", (void*)&n2);
    printf("\n ptr (address stored) = %p", (void*)ptr);
    printf("\n Value at ptr = %c", *ptr);  // Use %c for characters

    ptr = ptr - 1;  // Moves pointer one byte back (unsafe!)
    printf("\n ptr (after decrement) = %p", (void*)ptr);
    printf("\n Value at ptr = %c", *ptr);  // Printing character at new address

    printf("\n Address of ptr variable itself = %p", (void*)&ptr);
    printf("\n The End...\n");

    return 0;
}

op:-
 Address of n1 = 0x7ffeefbff5b8
 Address of n2 = 0x7ffeefbff5b7
 ptr (address stored) = 0x7ffeefbff5b8
 Value at ptr = a
 ptr (after decrement) = 0x7ffeefbff5b7
 Value at ptr = b
 Address of ptr variable itself = 0x7ffeefbff5c0
 The End...
