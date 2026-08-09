#include <stdio.h>

int main() {

    int ogAmount, rate, time, si;
    /*
    ogAmount = Original Amount
    Rate = Interest Rate
    Time = Time Period
    SI = Simple Interest
    */

    printf("Enter your original amount.\n");
    scanf("%d", &ogAmount);

    printf("Enter your interest rate.\n");
    scanf("%d", &rate);

    printf("Enter your time period\n");
    scanf("%d", &time);

    si = ogAmount*rate*time/100;

    printf("Your simple interest is: %d", si);

    return 0;
}