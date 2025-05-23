#include <stdio.h>
#include <limits.h>

int main() {
    long long int a = INT_MAX;
    printf("\n a = %lld", a);
    a = a + 1;
    printf("\n a = %lld", a);
    return 0;
}

op:-
 a = 2147483647
 a = 2147483648