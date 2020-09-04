/*Write a C-program that converts metric measurements to imperial system values.
 Measurements are provided to your program in meters, grams or degrees Celsius 
 and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. 
Each of the following lines contains a value to be converted as well as its unit:
m, g or c (for meters, grams or degrees Celsius). There will be a space between 
the number and the unit. You should print your output value for each input line 
immediately after calculating it (ie, you do not have to wait until you have 
read all inputs). Display the converted values with 6 decimal places, followed by 
a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). 
Each conversion result should be printed on its own line, and you should store and 
display all decimal values as doubles.*/

#include <stdio.h>
int unitfinder(char[2]);
double MetersToFeet(double);
double GramsToPounds(double);
double CelsiusToFahrenheit(double);



int main(void){
    char unitName[2];
    double value, newValue;
    int times, i, unitValue;
    printf("Type how many units to convert: ");
    scanf("%d", &times);
    for(i=0;i<times;i++)
    {
        scanf("%lf %s", &value, unitName);
        unitValue = unitfinder(unitName);
        //printf("%d\n",unitValue);
        if(unitValue == 1)
        {
            newValue = GramsToPounds(value);
            printf("%.6lf lbs\n", newValue);
        } else if(unitValue == 2)
        {
            newValue = MetersToFeet(value);
            printf("%.6lf ft\n", newValue);
        } else if(unitValue == 3)
        {
            newValue = CelsiusToFahrenheit(value);
            printf("%.6lf f\n", newValue);
        }
    }


    return 0;
}


int unitfinder(char unit[2]){
    if (unit[0] == 'g')
    { 
        return 1;
    }
    else if (unit[0] == 'm')
    {
        return 2;
    }
    else{ 
        return 3;
    }
    
}

double GramsToPounds(double valueInGrams){
    return valueInGrams*0.002205;
}

double CelsiusToFahrenheit(double valueInCelsius){
    return 32 + (valueInCelsius * 1.8);

}

double MetersToFeet(double valueInMeters){
    return valueInMeters*3.2808;
}