/* Please write a C-program that reads a decimal number
representing a temperature in degrees Celsius and prints
out the corresponding temperature in degrees Fahrenheit 
with 1 decimal place. Here is the conversion formula:

Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0 */

#include <stdio.h>

int main(void){
    
    double celsius, fahrenheit;
    
    printf("Enter a Celsius temperature: ");
    scanf("%lf", &celsius);
    
    fahrenheit = celsius * (9.0/5.0) + 32;
    
    printf("Fahrenheit: %.1lf\n", fahrenheit);
    return 0;
}