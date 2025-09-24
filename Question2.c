#include <stdio.h>

int main(){
    int power;
    char lightColor;
    
    printf("Is the power on? (1=yes, 0=no): ");
    scanf("%d", &power);
    
    switch(power){
        case 1: 
            printf("Enter traffic light color: (R=Red, Y=Yellow, G=Green): ");
            scanf("\n%c", &lightColor);
            
            switch(lightColor){
                case 'R':
                    printf("\nStop!");
                    break;
                case 'Y':
                    printf("\nCaution!");
                    break;
                case 'G':
                    printf("\nGo!");
                    break;
                default:
                    printf("\nInvalid Color");
            }
            
            break;
            
        case 0:
            printf("\nSignal Off");
            break;
            
        default:
            printf("\nInvalid input for power");
    }
    return 0;
}
