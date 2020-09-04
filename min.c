/*The goal of this problem is to find the smallest integer in a list of numbers.
To help you with this task, please write a function called min() that finds and 
returns the smallest amongst two integers (be sure to also write a prototype for
 this function). The function thus takes two integers as input and returns the 
 smallest of the two. This function will use an if statement with a condition 
 that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire 
list of numbers in order to find its minimum. The first number you read gives the 
number of elements in the list of integers under consideration. You will then read 
the integer values, using min() to keep only the smallest integer read at each step. 
In the end, please print out the smallest integer in the list.*/

#include <stdio.h>
int min(int[], int);

int main(void)
{   
    int length, i, minValue;

    printf("Number of elements:")
    scanf("%d", &length);
    int list[length];
    for(i=0;i<length;i++)
    {
        scanf("%d", &list[i]);
    }

    minValue = min(list, length);
    printf("minimun value: %d\n", minValue);

    return 0;
}

//this function copies a list and sorts it. Then it returns its first value 
int min(int list[], int length)
{
    int i, j, swap;
    int newlist[length];
    
    for (i = 0; i < length; i++)
    {
        newlist[i] = list[i];
    }

    for (j = 0; j < length-1; j++)
    {
        for ( i = 0; i < length-1; i++)
        {
            if(newlist[i] > newlist[i+1])
            {
                swap = newlist[i];
                newlist[i] = newlist[i+1];
                newlist[i+1] = swap;
            }
        }
        
    }
    return newlist[0];
}