/* Your program must first read an integer indicating
the number that the child will have to find during the 
game. Next the program should repeatedly read the 
player's guesses and display the text "it is more" if 
the child has submitted a smaller number or "it is less"
if they have submitted a larger number. Once the correct 
number is reached, the program should print "Number of 
tries needed:" followed by a new line and the integer 
number of tries that it took the guesser.*/

#include <stdio.h>

int main(void)
{
    int userEntry, try;
    int numberOfTries = 0;

    scanf("%d", &userEntry);
    scanf("%d", &try);
    while (try != userEntry)
    {
        numberOfTries++;
        if(try > userEntry)
        {
            printf("it is less\n");
            scanf("%d", &try);
        }else
        {
            printf("it is more\n");
            scanf("%d", &try);
        }  
        
    }
    printf("Number of tries needed: %d\n", numberOfTries);

    return 0;
}