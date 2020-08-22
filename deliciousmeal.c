/*You plan to make a delicious meal and want 
to take the money you need to buy the ingredients. 
Fortunately you know in advance the price per 
pound of each ingredient as well as the exact 
amount you need. The program should read in 
the number of ingredients (up to a maximum of 
10 ingredients), then for each ingredient the 
price per pound. Finally your program should 
read the weight necessary for the recipe (for 
each ingredient in the same order). Your program
should calculate the total cost of these purchases, 
then display it with 6 decimal places.*/

#include <stdio.h>

int main(void){
    int i;
    int numIngredients = 0;
    double totalToPay = 0.0;
    double price;
    
    printf("Number of ingredients: ");
    scanf("%d" , &numIngredients);
    for(i=0;i<5;i++)
    {
        if (numIngredients<=10)
        { 
            double pricePerPound[numIngredients];
            double weightArray[numIngredients];
            printf("Enter the price per pound:\n");
            for(i=0;i<numIngredients; i++)
            {
                scanf("%lf", &pricePerPound[i]);
            }

            printf("Enter the weight (in pounds) for each product:\n");
            for(i=0;i<numIngredients; i++)
            {
                scanf("%lf", &weightArray[i]);
            }

            for(i=0;i<numIngredients;i++){
                price = pricePerPound[i] * weightArray[i];
                totalToPay = totalToPay + price;
            }
            printf("\n\nTotal amout to pay: %.6lf\n", totalToPay);
        }else
            {   
                printf("Error! Number of ingredients must not be bigger than 10.\n");
                break; 
            }
        
    }


    
    return 0;
}