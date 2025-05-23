#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 300; i++) {
        if (((i % 3) == 0) && ((i % 5) == 0))  // Fixed extra `)`
            printf("\n Hello World");
        else if ((i % 3) == 0)
            printf("\n Hi");
        else if ((i % 5) == 0)
            printf("\n Hello");
    }
    return 0;
}

op:-
Hi
 Hello
 Hi
 Hi
 Hello
 Hi
 Hello World
 Hi
 Hello
 Hi
 Hi
 Hello
 Hi
 Hello World