#include <stdio.h>

int main() {

    int userAge, votingAge = 18, check;

    printf("Please enter your age.");
    scanf("%d", &userAge);

    check = userAge >= votingAge;

    if (check) {
        printf("You're eligible to vote.");
    }

    return 0;
}