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
    
    case 3:
    printf("It's Tuesday.");
    break;

    case 4:
    printf("It's Wednesday.");
    break;

    case 5:
    printf("It's Thursday.");
    break;

    case 6:
    printf("It's Friday.");
    break;

    case 7:
    printf("It's Saturday.");
    break;

    default:
    printf("Invaild input.");
        break;
    }

    return 0;
}