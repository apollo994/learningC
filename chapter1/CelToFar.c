#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for cel = 0, 20, ..., 300 */

int main()
{ 
    printf("%10s\t%10s\n", "Celsius", "Fahrenheit");
    
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;    // lower limit of temperature scale
    upper = 300;  // upper limit
    step = 20;    // step size 

    celsius = lower;

    while (celsius <= upper) { 
        fahr = celsius * (9.0 / 5.0) + 32;
        //adding 4 and 6 after % to print in a field 3 and 6 digits wide 
        printf("%10.0f\t%10.1f\n", celsius, fahr);
        celsius = celsius + step; 
    }
}
