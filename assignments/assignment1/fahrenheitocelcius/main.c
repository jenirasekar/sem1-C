#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    float celcius;

    printf("Enter a Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celcius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("Celcius temperature: %.2f\n", celcius);

    return 0;
}
