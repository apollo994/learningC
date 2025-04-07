#include <stdio.h>

int c, prev;

int main() {

    prev = 0;

    while ((c = getchar()) != EOF) {
        
        if (c == ' ' || c == '\n' || c == '\t' && prev == 0)
            if (prev == 0) {
                putchar('\n');
                prev = 1;
            }
            else
             ;
        else {
            putchar(c);
            prev = 0;
        }    
    }
}

