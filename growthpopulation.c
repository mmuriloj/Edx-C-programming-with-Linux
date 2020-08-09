/*Please write a C-program that first reads an integer
representing the current population of the city, and 
that next reads a decimal number for the projected 
population growth as a percentage (either positive
or negative). The program should then display the 
expected population of the city in a year as a whole
number. By convention we will only consider "whole"
people. So a population of 31.8 inhabitants will be
considered as having 31 inhabitants. */

#include <stdio.h>

int main(void){

    int currentPopulation, newPopulation;
    double projGrowth;

    scanf("%d %lf", &currentPopulation, &projGrowth);
    
    newPopulation = ((int) (currentPopulation + currentPopulation*(projGrowth/100)));
    printf("%d\n", newPopulation);

    return 0;
}