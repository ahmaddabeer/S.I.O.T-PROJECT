// Object: Write a program in C to input the basic pay of the employee and calculate DA, HRA, PF, and TA if HRA = 10%, TA = 5% of basic pay, and PF = 20% of basic pay. Calculate the net salary.
//  DATE: 14|10|2024
#include <stdio.h>

int main()
{
    float basicPay, da, pf, hra, ta, totalSalary;

    // Input the basic pay from the user
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);

    // Calculate allowances and deductions
    da = 0.15 * basicPay;  // 15% Dearness Allowance
    pf = 0.20 * basicPay;  // 20% Provident Fund
    hra = 0.10 * basicPay; // 10% House Rent Allowance
    ta = 0.05 * basicPay;  // 5% Travel Allowance

    // Calculate total salary
    totalSalary = basicPay + da + hra + ta - pf;

    // Display all calculated values
    printf("Basic Pay: %.2f\n", basicPay);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("Provident Fund (PF): %.2f\n", pf);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Travel Allowance (TA): %.2f\n", ta);
    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}
