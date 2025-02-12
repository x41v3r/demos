#include <stdio.h>

/*
 * Write a C Program to convert temperature from Fahrenheit to Celsius by applying the conversion formula to calculate the equivalent temperature in Celsius. For example, 82° in Fahrenheit is equal to 27.7° in Celcius.
 * T(°C) = (T(°F) - 32) × 5/9
 */

double fahrenheit_to_celsius(double temperature);

int main()
{
    double f = 40;
    printf("Temperature in Degree Celsius : %0.2f\n", fahrenheit_to_celsius(f));
    return 0;
}

double fahrenheit_to_celsius(double temperature)
{
    return (temperature - 32) * 5 / 9;
}
