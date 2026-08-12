#include <stdio.h>

int main() {

    int userDay;

    printf("Enter the input.");
    scanf("%d", &userDay);

    switch (userDay)
    {
    case 1:
        printf("It's Sunday.");
        break;
    
    case 2: 
        printf("It's Monday.");
        break;

    default:
        break;
    }

    return 0;
}