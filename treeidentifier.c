/*As you cross a forest you can't help but admire the nature around you 
including the many species of trees. Despite your interest, you are a 
very unskilled botanist and have a lot of trouble identifying different 
trees. A friend gives you some guidance and you decide to write a program 
that will give you the name of the tree based on its characteristics.

There are 4 types of trees:
the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets
the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets
the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets
the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets

Your program should read the height and the number of leaflets of a given tree (both integers),
and should be able to determine and display the name of the corresponding tree.  If the height
and number of leaflets does not match any of the tree type descriptions, your program should 
display "Uncertain".

*/ 

#include <stdio.h>

int main(void)
{
    int height, leaflets;
    int tinuviel, calaelen, falarion, dorthonion;
    scanf("%d %d", &height, &leaflets);
    

    tinuviel = (height <= 5) && (leaflets >= 8);
    calaelen = (height >= 10) && (leaflets >= 10);
    falarion = (height <= 8) && (leaflets <= 5);
    dorthonion = (height >= 12) && (leaflets <= 7);

    if (tinuviel){
        printf("Tinuviel\n");
        } else if (calaelen) {
            printf("Calaelen\n");
        }else if (falarion){
            printf("Falarion\n");
        } else if (dorthonion){
            printf("Dorthonion\n");
        }else {
            printf("Uncertain\n");
        }   
}