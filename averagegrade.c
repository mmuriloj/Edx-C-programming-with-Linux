/*Your program must first read an integer indicating the
number of grades to be averaged. Next, your program will
read the grades one by one, all of which are integers as
well. Finally, your program will calculate and print the
 average of the grades to two decimal places.*/

#include <stdio.h>

int main(void){
    int i;
    int numNotas, nota;
    int sum = 0;
    double media;
    scanf("%d\n", &numNotas); //number of grades
    
    for(i=0; i<numNotas; i++){
        scanf("%d", &nota);
        sum = sum + nota;
    }
    
    
    
    printf("num notas:%d\nsum:%d\n", numNotas, sum);
    media = ((double) sum)/numNotas;
    printf("mean: %.2lf\n", media);
    
    return 0;
}