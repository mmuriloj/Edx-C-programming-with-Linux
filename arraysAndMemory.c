/*You are designing a new cookie recipe and are experimenting with different amounts of 
wet (water, oil) and dry (flour, sugar, cocoa powder) ingredients in order to get the 
proportions just right. All of these amounts are initially read from the user input, and 
the code to do so, along with all variable declarations, had already been completed. 
You are interested in the total amount of wet and dry ingredients used in the recipe as 
well as the ratio of these two quantities.

Take a look at the code that is already given to you. Your job is to add four lines of 
code, precisely where indicated by a comment such as


Example

Input

10.5 20.2                                                                                                                               
30.3 40.4 50.5

Output

Total amount of wet ingredients: 30.70 grams.                                                                                           
Total amount of dry ingredients: 121.20 grams.                                                                                          
Ratio of wet to dry ingredients: 3.95.                                                                                                  
New water amount: 15.35 grams, new oil amount: 15.35 grams.*/

#include <stdio.h>

int main(void) {

    double totalWet, totalDry, ratio;

    double wet[2];
    double dry[3];
    double * cookie[2] = {wet,dry};
    
    scanf("%lf%lf", &wet[0], &wet[1]);
    scanf("%lf%lf%lf", &dry[0], &dry[1], &dry[2]);

    
    totalWet = cookie[0][0] + cookie[0][1];
    printf("Total amount of wet ingredients: %.2lf grams.\n", totalWet);
    
    totalDry = cookie[1][0] + cookie[1][1] + cookie[1][2];
    printf("Total amount of dry ingredients: %.2lf grams.\n", totalDry);

    ratio = totalDry/totalWet;
    printf("Ratio of wet to dry ingredients: %.2lf.\n", ratio);

    (cookie[0][0]) = (0.5 * totalWet);
    (cookie[0][1]) = (0.5 * totalWet);    
    printf("New water amount: %.2lf grams, new oil amount: %.2lf grams.\n", wet[0], wet[1]);
    
    return 0;
}
