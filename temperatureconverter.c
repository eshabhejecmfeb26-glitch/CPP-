#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float c = 25.0;
    float f = 77.0;

    float resultF = celsiusToFahrenheit(c);
    float resultC = fahrenheitToCelsius(f);

    printf("Celsius to Fahrenheit: %.2f\n", resultF);
    printf("Fahrenheit to Celsius: %.2f\n", resultC);

    return 0;
}



float celsiusToFahrenheit(float c) {
    return (c * 9/5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5/9;
}