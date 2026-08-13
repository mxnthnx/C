#include <stdio.h>

int main() {

    int studentID, sub1, sub2, sub3, sub4, sub5, totalMarks; 

    float totalPercentage;

    printf("Enter your Student ID.\n");
    scanf("%d", &studentID);
 

    if(scanf("%d", &studentID) != 1) {
        printf("Invalid. Student ID is supposed to be an number.");
    }
    else {
    printf("Enter your Maths marks. (out of 100)\n");
    scanf("%d", &sub1);

    if(scanf("%d", &sub1) != 1) {
        printf("Marks are supposed to be entered in numerical form.");
    }
    else {
    printf("Enter your Physics marks. (out of 100)\n");
    scanf("%d", &sub2);

    if(scanf("%d", &sub2) != 1) {
        printf("Marks are supposed to be entered in numerical form.");
    }
    else {

    printf("Enter your Chemistry marks. (out of 100)\n");
    scanf("%d", &sub3);

    if(scanf("%d", &sub3) != 1) {
        printf("Marks are supposed to be entered in numerical form.");
    }
    else {

    printf("Enter your English marks. (out of 100)\n");
    scanf("%d", &sub4);

    if(scanf("%d", &sub4) != 1) {
        printf("Marks are supposed to be entered in numerical form.");
    }
    else {

    printf("Enter your P.E marks. (out of 100)\n");
    scanf("%d", &sub5);

    totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
    totalPercentage = totalMarks * 100.0 / 500;

    printf("The total number of marks you scored is %d and your percentage is %f", totalMarks, totalPercentage);

    }
    } 
} 
}
}
    return 0;
}