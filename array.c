#include <stdio.h>

int main() {
    int arr[5] = {11, 42, 53, 74, 25};
    int i;
    
    printf("\n arr = %p", (void*)arr);  // Correct format for address printing
    
    for (i = 0; i < 5; i++) {
        printf("\n arr[%d] = %d", i, arr[i]);
        printf("\n *(arr + %d) = %d", i, *(arr + i));
        printf("\n *(%d + arr) = %d", i, *(i + arr));
        printf("\n i[arr] = %d", i, i[arr]);  // Works because i[arr] is equivalent to arr[i]
    }

    return 0;
}

op:-
arr = 0x7ffdd9c3c7a0
 arr[0] = 11
 *(arr + 0) = 11
 *(0 + arr) = 11
 i[arr] = 0
 arr[1] = 42
 *(arr + 1) = 42
 *(1 + arr) = 42
 i[arr] = 1
 arr[2] = 53
 *(arr + 2) = 53
 *(2 + arr) = 53
 i[arr] = 2
 arr[3] = 74
 *(arr + 3) = 74
 *(3 + arr) = 74
 i[arr] = 3
 arr[4] = 25
 *(arr + 4) = 25
 *(4 + arr) = 25
 i[arr] = 4
