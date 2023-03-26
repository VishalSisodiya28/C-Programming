// Write a program that converts Centigrade to Fahrenheit.

#include <stdio.h>

int main()
{

    int C;
    float F;

    printf("Temperature in celcius : ");
    scanf("%i", &C);

    F = (float)9 / 5 * C + 32; // formula for conversion, we can use 1.8 instead of 9/5 so we dont need to typecast.
    //  ^ -> This is typecasting(explicit i.e, narrowing)

    printf("temperature in fahrenheit is : %.1f ", F);

    return 0;
}
