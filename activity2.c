//(enginePower + resistance) * (weight - height)
#include <stdio.h>

int main(void){
    int enginePower, resistance, weight, height, numRobots;
    int i;
    int totalPower = 0;
    scanf("%d", &numRobots);
    
    for(i=0;i<numRobots;i++){
        scanf("%d %d %d %d", &weight, &height, &enginePower, &resistance);
        totalPower = totalPower + (enginePower + resistance) * (height - weight);
    }
    
    printf("%d\n", totalPower);
    return 0;
}
