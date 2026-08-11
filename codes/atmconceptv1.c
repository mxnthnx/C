#include <stdio.h>

int main() {
    
    int accNumber, accPIN;
    
    char menu[] = "Please select the menu to proceed.\n1. Show Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
    int userChoice, depositAmount, newBal, withAmount, withAmountBal;
    
    int acc1 = 6969;
    int acc1PIN = 6969;
    int acc1B = 69690;
    
    int acc2 = 5000;
    int acc2PIN = 5000;
    int acc2B = 50000;
    
    int acc3 = 6911;
    int acc3PIN = 6911;
    int acc3B = 6900;
    
    int acc4 = 6900;
    int acc4PIN = 6900;
    int acc4B = 69000;
    
    int acc5 = 1000;
    int acc5PIN = 1000;
    int acc5B = 10000;
    

    printf("Enter your account number.\n");
    scanf("%d", &accNumber);
    
    printf ("Please enter your account PIN.\n");
    scanf ("%d", &accPIN);
    
    if (accNumber == acc1 && accPIN == acc1PIN) {
        printf("Authentication Successful.\n\n");
        printf ("%s", menu);
        scanf("%d", &userChoice);

        if (userChoice == 1){
          printf ("Your account balance is %d", acc1B);
        }

        else if (userChoice == 2) {
          printf ("Please enter your deposit amount.\n");
          scanf("%d", &depositAmount);

          newBal = depositAmount + acc1B;

          printf ("Added %d to your account.\n", depositAmount);
          printf ("Your new balance is %d.", newBal);
    }

        else if (userChoice == 3) {
            printf ("Please enter the amount to withdraw.\n");
            scanf ("%d", &withAmount);

            withAmountBal = acc1B - withAmount;

            if (withAmount >= 500) {
                printf ("%d withdrawn.\n", withAmount);
                printf ("Your current balance is now %d", withAmountBal);
            }

            else if (withAmount < 500) {
                printf ("The minimum amount to withdraw is 500.\n");
            }
        }

        else if (userChoice == 4) {
            printf("Ended the session. Thank You.\n");
        }
    }

    else if (accNumber == acc2 && accPIN == acc2PIN) {
      printf("Authentication Successful.\n\n");
      printf ("%s", menu);
      scanf("%d", &userChoice);

      if (userChoice == 1){
          printf ("Your account balance is %d", acc2B);
        }

        else if (userChoice == 2) {
          printf ("Please enter your deposit amount.\n");
          scanf("%d", &depositAmount);

          newBal = depositAmount + acc2B;

          printf ("Added %d to your account.\n", depositAmount);
          printf ("Your new balance is %d.", newBal);
    }

        else if (userChoice == 3) {
            printf ("Please enter the amount to withdraw.\n");
            scanf ("%d", &withAmount);

            withAmountBal = acc2B - withAmount;

            if (withAmount >= 500) {
                printf ("%d withdrawn.\n", withAmount);
                printf ("Your current balance is now %d", withAmountBal);
            }

            else if (withAmount < 500) {
                printf ("The minimum amount to withdraw is 500.\n");
            }
        }
        
        else if (userChoice == 4) {
            printf("Ended the session. Thank You.\n");
        }
}

    else if (accNumber == acc3 && accPIN == acc3PIN) {
        printf ("Authentication Successful.\n\n");
        printf ("%s", menu);
        scanf("%d", &userChoice);

        if (userChoice == 1){
          printf ("Your account balance is %d", acc3B);
        }

        else if (userChoice == 2) {
          printf ("Please enter your deposit amount.\n");
          scanf("%d", &depositAmount);
          newBal = depositAmount + acc3B;
          printf ("Added %d to your account.\n", depositAmount);
          printf ("Your new balance is %d.", newBal);
    }

        else if (userChoice == 3) {
            printf ("Please enter the amount to withdraw.");
            scanf ("%d", &withAmount);

            withAmountBal = acc3B - withAmount;

            if (withAmount >= 500) {
                printf ("%d withdrawn.\n", withAmount);
                printf ("Your current balance is now %d", withAmountBal);
            }

            else if (withAmount < 500) {
                printf ("The minimum amount to withdraw is 500.\n");
            }
        }
    
        else if (userChoice == 4) {
            printf("Ended the session. Thank You.\n");
        }
}

    else if (accNumber == acc4 && accPIN == acc4PIN) {
        printf("Authentication Successful\n\n");
        printf ("%s", menu);
        scanf("%d", &userChoice);

        if (userChoice == 1){
          printf ("Your account balance is %d", acc4B);
        }

        else if (userChoice == 2) {
          printf ("Please enter your deposit amount.\n");
          scanf("%d", &depositAmount);
          newBal = depositAmount + acc4B;
          printf ("Added %d to your account.\n", depositAmount);
          printf ("Your new balance is %d.", newBal);

    }
        else if (userChoice == 3) {
            printf ("Please enter the amount to withdraw.\n");
            scanf ("%d", &withAmount);

            withAmountBal = acc4B - withAmount;

            if (withAmount >= 500) {
                printf ("%d withdrawn.\n", withAmount);
                printf ("Your current balance is now %d", withAmountBal);
            }

            else if (withAmount < 500) {
                printf ("The minimum amount to withdraw is 500.\n");
            }
        }
    
        else if (userChoice == 4) {
            printf("Ended the session. Thank You.\n");
        }
}
    
    else if (accNumber == acc5 && accPIN == acc5PIN) {
        printf ("Authentication Successful\n\n");
        printf ("%s", menu);
        scanf("%d", &userChoice);
        if (userChoice == 1){
          printf ("Your account balance is %d", acc5B);
        }
        else if (userChoice == 2) {
          printf ("Please enter your deposit amount.\n");
          scanf("%d", &depositAmount);
          newBal = depositAmount + acc5B;
          printf ("Added %d to your account.\n", depositAmount);
          printf ("Your new balance is %d.", newBal);
    }
    else if (userChoice == 3) {
        printf ("Please enter the amount to withdraw.\n");
        scanf ("%d", &withAmount);

        withAmountBal = acc5B - withAmount;

        if (withAmount >= 500) {
            printf ("%d withdrawn.\n", withAmount);
            printf ("Your current balance is now %d", withAmountBal);
        }
        else if (withAmount < 500) {
                printf ("The minimum amount to withdraw is 500.\n");
            }
    }
    
        else if (userChoice == 4) {
            printf("Ended the session. Thank You.\n");
        }
}
    
    else {
        printf ("Authentication Unsuccessful.");
    }
    
    
    
    return 0;
}