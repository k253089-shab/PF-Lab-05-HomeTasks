#include <stdio.h>

int main()
{
    int permission;
    printf("Enter the action: 1 for READ, 2 for WRITE, and 4 for EXECUTE: ");
    scanf("%d", &permission);
    
    if(permission & 4){
        printf("\nAccess granted: full control");
    } else if ((permission & 2) && (permission & 1)){
        printf("\nAccess granted: read and write");
    } else if (permission & 1){
        printf("\nAccess granted: read-only");
    } else {
        printf("\nAccess denied");
    }

    return 0;
}
