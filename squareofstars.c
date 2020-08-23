/*Create a program that displays on
the screen a square of n x n stars, 
with the integer n given as an input.*/

#include <stdio.h>

int main(void){
    int numberOfStars, i1, i2;
    printf("Enter the number of stars to be printed: ");
    scanf("%d", &numberOfStars);

    for(i1=0;i1<numberOfStars;i1++)
    {
        for(i2=0;i2<numberOfStars;i2++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}

