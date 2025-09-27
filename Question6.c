#include <stdio.h>

int main()
{
    char room, action;
    printf("Enter your room (L for Living Room, K for Kitchen): ");
    scanf(" %c", &room);
    printf("Enter the action (L for Lights, T for Thermostat): ");
    scanf(" %c", &action);
    
    switch (room){
        case 'L':
        case 'l':
            switch (action){
                case 'L':
                case 'l':
                    printf("\nAdjusting ambient lighting.");
                    break;
                case 'T':
                case 't':
                    printf("\nSetting living room temperature.");
                    break;
                default:
                    printf("\nAction Not Found.");
                    break;
            }
            break;
        case 'K':
        case 'k':
            switch (action){
                case 'L':
                case 'l':
                    printf("\nTurning on bright task lighting.");
                    break;
                case 'T':
                case 't':
                    printf("\nSetting kitchen temperature.");
                    break;
                default:
                    printf("\nAction Not Found.");
                    break;
            }
            break;
        default:
            printf("\nRoom Not Found.");
            break;
    }
    return 0;
}
