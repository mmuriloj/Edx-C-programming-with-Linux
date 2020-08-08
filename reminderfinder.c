/*You have a number of loose matches that you would
like to put back into boxes. Write a program that 
calculates and displays how many full boxes you will 
have and how many leftover matches you will have after 
filling all the boxes you can. Your program should take 
as input the number of matches to be boxed up followed 
by the size of a each box. Next it should print out the
number of full boxes followed by the number of remaining matches.*/

#include <stdio.h>

int main(void){
    int numMatches, sizeOfBox, numOfBoxes, reminder;

    //input values
    printf("enter the number of matches and box capacity (separated by a space): ");
    scanf("%d %d", &numMatches, &sizeOfBox);
    
    //calculation
    numOfBoxes = numMatches/sizeOfBox;
    reminder = numMatches%sizeOfBox;
    
    //output
    printf("num of Boxes: %d\nMatches left: %d\n", numOfBoxes, reminder);
    
    return 0;
}