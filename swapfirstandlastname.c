#include <stdio.h>

int main(void)
{
    int numberOfNames, i;
    int spaceChar = 0;
    int index = 0;
    int length = 0;
    char string[100], firstName[101], lastName[101];


    
    printf("Number of names: ");
    scanf("%d", &numberOfNames);

    for(i=0;i<numberOfNames;i++)
    {
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);

    }

    //printf("%d", index);
    return 0;
}