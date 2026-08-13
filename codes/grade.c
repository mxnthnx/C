#include <stdio.h>

int main() {

    int studentID, sub1, sub2, sub3, sub4, sub5, totalMarks;
    float totalPercentage;

    printf("Enter your Student ID.\n");
    scanf("%d", &studentID);

    printf("Enter your Maths marks. (out of 100)\n");
    scanf("%d", &sub1);
    
    printf("Enter your Physics marks. (out of 100)\n");
    scanf("%d", &sub2);

    printf("Enter your Chemistry marks. (out of 100)\n");
    scanf("%d", &sub3);

    printf("Enter your English marks. (out of 100)\n");
    scanf("%d", &sub4);

    printf("Enter your P.E marks. (out of 100)\n");
    scanf("%d", &sub5);

    totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
    totalPercentage = totalMarks * 100 / 500;

    printf("The total number of marks you scored is %d and your percentage is %f", totalMarks, totalPercentage);


    return 0;
}