/*You are responsible for a rail convoy of goods consisting 
of several boxcars. You start the train and after a few minutes 
you realize that some boxcars are overloaded and weigh too 
heavily on the rails while others are dangerously light. So 
you decide to stop the train and spread the weight more evenly 
so that all the boxcars have exactly the same weight (without 
changing the total weight). For that you write a program which 
helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed 
(integer) followed by the weights of the cars (doubles). Then 
your program should calculate and display how much weight to add 
or subtract from each car such that every car has the same weight.
The total weight of all of the cars should not change. These 
additions and subtractions of weights should be displayed with 
one decimal place.

You may assume that there are no more than 50 boxcars. */

#include <stdio.h>

int main(void){
    int i, numBoxcars;
    printf("Enter the number of boxcars: ");
    scanf("%d", &numBoxcars);
    
    double totalWeight = 0;
    double weightOfCars[numBoxcars], meanWeight;
    
    // array of weights
    printf("Enter the weight of the cars:\n");
    for(i=0;i<numBoxcars;i++){
        scanf("%lf", &weightOfCars[i]);
    }

    //sum of weight
    for(i=0;i<numBoxcars;i++){
        totalWeight = totalWeight + weightOfCars[i];
    }

    meanWeight = totalWeight / numBoxcars;
    printf("Total weight:%.2lf\nMean: %.2lf\n", totalWeight, meanWeight);

    for(i=0;i<numBoxcars;i++){
        weightOfCars[i] = meanWeight - weightOfCars[i];
        printf("%.1lf\n", weightOfCars[i]); 
    }
    
    return 0;
}