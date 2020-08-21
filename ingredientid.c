/*Your grandparents gave you a fantastic cooking 
recipe but you can never remember how much of each 
ingredient you have to use! There are 10 ingredients 
in the recipe and the quantities needed for each of 
them are given as input (in grams). Your program must 
read 10 integers (the quantities needed for each of 
the ingredients, in order) and store them in an array.
It should then read an integer which represents an 
ingredient's ID number (between 0 and 9), and output 
the corresponding quantity.*/

#include <stdio.h>

int main(void){
    int ingredientID;
    int quantity[10];
    int i, value;

    for(i=0;i<10;i++){
        printf("Enter the quantity: ");
        scanf("%d", &value);
        quantity[i] = value;
    }

    scanf("%d", &ingredientID);
    ingredientID = ingredientID - 1;
    printf("You must add %d units of %dth ingredient \n", quantity[ingredientID], (ingredientID + 1));

    return 0;
}