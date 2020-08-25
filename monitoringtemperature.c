#include <stdio.h>

int main(void)
{
    int maxTemp, minTemp, currentTemp;
    
    scanf("%d %d", &minTemp, &maxTemp);
    scanf("%d", &currentTemp);
    
    while(currentTemp != -999)
    {
        if (currentTemp > maxTemp || currentTemp < minTemp)
        {
            printf("Alert!\n");
            break;
        }else
        {
            printf("Nothing to report\n");
        }
        
        scanf("%d", &currentTemp);
    }
    return 0;
}