#include <stdio.h>

int main() {

    int celsius, fahrenhiet, convert;

    printf("Enter the temperature in Celsius.\n");
    scanf("%d", &celsius);

    convert = celsius * 9/5 + 32;

    printf("The temperature in Fahrenheit is: %d", convert);

    return 0;
}