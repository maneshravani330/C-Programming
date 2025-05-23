#include <stdio.h>

int main() {
    int i;
    for (i = 0; i <= 255; i++)
        printf("\n %c - %d", i, i);
    
    printf("\n The End...");
    return 0;
}

op:-
  - 0
  - 1
  - 2
  .
  .
A - 65
B - 66
C - 67
.
.
z - 122
{ - 123
| - 124
} - 125
~ - 126
  - 127
.
.
ÿ - 255
The End...
