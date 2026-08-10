#include <stdio.h>

int main() {
    
    /*
    cusId = Customer ID,
    pmr = Previous meter reading,
    cmr = Current meter reading,
    ppu = Price per unit,
    fixedc = Fixed Charge
    */

    int cusId, pmr, cmr;
    float ppu, fixedC; 

    /*
    unitsC = Units consumed,   
    energyC = Energy charge,
    totalbill = Total bill
    */

    float unitsC, energyC, totalbill;

    printf("Please enter your Customer ID.\n");
    scanf("%d", &cusId);

    printf("Please enter your previous meter reading.\n");
    scanf("%d", &pmr);

    printf("Please enter your current meter reading.\n");
    scanf("%d", &cmr);

    printf("Please enter the price per unit.\n");
    scanf("%f", &ppu);

    printf("Please enter the fixed charge.\n");
    scanf("%f", &fixedC);

    unitsC = cmr - pmr;
    energyC = unitsC * ppu;
    totalbill = energyC + fixedC;

    printf("Your total bill is: %f", totalbill);

    return 0;
}