#include <stdio.h>

int main() { 
    
    char c, prev;

    prev = 0;

    while ((c = getchar()) != EOF) {

        if (c == ' ') {

            if (prev != ' ') {
                putchar(c);
                prev = ' ';
            }
        }
        else {
            putchar(c);
            prev = c; 
        }
    }
}
