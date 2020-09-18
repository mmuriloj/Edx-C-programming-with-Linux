/*
Within this program, we will pass an array with 6 integers to a function, 
have the function swap the first and last integer, the second and the second 
to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It 
should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to 
the array. The main function then calls reverseArray, passing the array as an 
argument.

The main function then prints the reversed array.
Example

Input:1 2 3 4 5 6
Output: 6 5 4 3 2 1
*/

#include <stdio.h>
void reverseArray(int *);

int main(void)
{
    int i, myArray[6];
    
    printf("Normal array: ");
    /*for(i=0;i<6;i++)
    {
        scanf("%d", &myArray[i]);    
    }*/
    scanf("%d %d %d %d %d %d", &myArray[0], &myArray[1], &myArray[2], &myArray[3], &myArray[4], &myArray[5]);

    reverseArray(myArray);
    printf("Reversed array: ");
    
    for(i=0;i<6;i++)
    {
        printf("%d ", myArray[i]);    
    }

    printf("\n");
    return 0;
}

void reverseArray(int *array)
{
    int i, tmp;

    for(i=0;i<3;i++)
    {
        tmp = * (array + i);                    //tmp = array[i];
        * (array + i) = * (array + (5-i));      //array[i] = array[5-i];
        * (array + (5-i)) = tmp;                //array[5-i] = tmp;
    }
}
