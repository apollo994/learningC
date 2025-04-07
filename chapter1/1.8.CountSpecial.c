#include <stdio.h>

int main() {

    int c, nl, bl, tab;
    nl = 0;
    bl = 0;
    tab = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++tab;
    }
    printf("New line count : %d\n", nl); 
    printf("Blank count    : %d\n", bl); 
    printf("Tab count      : %d\n", tab); 
}
