#include <stdio.h>

// defining symbolic name
#define MAX 300
#define MIN 0
#define STEP 20

int main()
{ 
    int fahr; 
    for (fahr = MAX; fahr >= MIN; fahr = fahr - STEP)
    {   
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32)); 
    }
}
