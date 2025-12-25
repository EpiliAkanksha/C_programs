#include <stdio.h>
#include <math.h>

float calculateEMI(float principal, float annualRate, int years) {
    float monthlyRate = annualRate / (12 * 100); // converting to monthly rate
    int months = years * 12;
    float emi = (principal * monthlyRate) / (1 - pow(1 + monthlyRate, -months));
    return emi;
}

int main() 
{
    float loanAmount;
    int years, i, n;

    // Input
    printf("Enter loan amount: ");
    scanf("%f", &loanAmount);

    printf("Enter loan tenure in years: ");
    scanf("%d", &years);

    // Bank A details
    printf("\nEnter number of slabs (interest changes) for Bank A: ");
    scanf("%d", &n);
    float bankA_rates[n];
    printf("Enter %d annual interest rates for Bank A:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &bankA_rates[i]);
    }

    // Bank B details
    printf("\nEnter number of slabs (interest changes) for Bank B: ");
    scanf("%d", &n);
    float bankB_rates[n];
    printf("Enter %d annual interest rates for Bank B:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &bankB_rates[i]);
    }

    // EMI calculations
    float totalPaymentA = 0.0, totalPaymentB = 0.0;
    int slabYears = years / n;

    for(i = 0; i < n; i++) {
        float emiA = calculateEMI(loanAmount, bankA_rates[i], slabYears);
        totalPaymentA += emiA * 12 * slabYears;

        float emiB = calculateEMI(loanAmount, bankB_rates[i], slabYears);
        totalPaymentB += emiB * 12 * slabYears;
    }

    // Output
    printf("\nTotal payment to Bank A: %.2f\n", totalPaymentA);
    printf("Total payment to Bank B: %.2f\n", totalPaymentB);

    if (totalPaymentA < totalPaymentB) {
        printf("Choose Bank A\n");
    } else {
        printf("Choose Bank B\n");
    }

    return 0;
}

