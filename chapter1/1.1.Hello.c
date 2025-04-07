#include <stdio.h>

/* add init before main as now it is ecpected */ 

int main()
{
    printf("hello, world"); //no new line 
    printf("hello, world\n"); // new line
//    printf("hello, world\c"); // \c do not exists
    printf("hello\b, world\b"); // backslash del the char before 
    printf("hello, world\""); // prints quotes
    printf("hello, world\\"); // prints backslash 
}
