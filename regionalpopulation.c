/*You want to determine the number 
of cities in a given region that 
have a population strictly greater 
than 10,000. To do this, you write 
a program that first reads the 
number of cities in a region as an 
integer, and then the populations 
for each city one by one (also 
integers).*/

#include <stdio.h>

int main(void){
    int numberOfCities = 0;
    //int populationOfEachCity[numberOfCities];
    int i, isMorethan10k = 0;

    printf("Enter the number of cities in the region: ");
    scanf("%d", &numberOfCities);
    if(numberOfCities>0)
    {
        int populationOfEachCity[numberOfCities];
        printf("Enter the population for each city, separated by a blank space:\n");
        for(i=0;i<numberOfCities;i++)
        {
            scanf("%d", &populationOfEachCity[i]);
            if (populationOfEachCity[i] >= 10000)
            {
                isMorethan10k = isMorethan10k + 1;
            }
        }   

    }
    
    printf("%d cities have a population bigger than 10,000.\n", isMorethan10k);



    return 0;
}