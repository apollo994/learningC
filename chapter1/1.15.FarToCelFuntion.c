#include <stdio.h>

float convertFahrToCel(float fahr)
{ 
    float cel = (5.0/9.0)*(fahr-32);
    return cel;

}


int main()
{ 
    int fahr;

    printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) 
        printf("%10d\t%10.1f\n", fahr, convertFahrToCel(fahr)); 
}
