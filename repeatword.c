/*Write a C-program that prints out
a word as many times as specified. 
The number of repetitions and the 
word should be given as input to 
the program. You may assume that 
the word has no more than 100 
characters (be sure to also reserve 
space for the null terminator, \0, though!).*/

#include <stdio.h>

int main(void)
{
    int repeat, i;
    char word[101];

    printf("Times to repeat: ");
    scanf("%d", &repeat);
    scanf("%s", word);
    printf("--\n");
    for(i=0;i<repeat; i++)
    {
        printf("%s\n", word);
    }

    return 0;
}