#include <stdio.h>

int main () {
    
    int myNum = 69;
    float myFloat = 69.69;
    char myLetter = 'D';

//All separate outputs

    printf("%d",myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myLetter); 

//All in one output
 
    printf("my number is %d and my letter is %c", myNum, myLetter);

    return 0;
}