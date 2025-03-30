#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

int main()
{ 
    printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
    
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;    // lower limit of temperature scale
    upper = 300;  // upper limit
    step = 20;    // step size 

    fahr = lower;

    while (fahr <= upper) { 
        celsius = (5.0/9.0) * (fahr-32.0);
        //adding 4 and 6 after % to print in a field 3 and 6 digits wide 
        printf("%10.0f\t%10.2f\n", fahr, celsius);
        fahr = fahr + step; 
    }
}
