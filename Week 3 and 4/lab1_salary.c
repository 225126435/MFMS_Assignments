#include <stdio.h>

int main(void) {
    double basic, housing, transport, tax;
    double gross, net;

    printf("--- EMPLOYEE SALARY CALCULATOR ---\n");

    printf("Enter basic salary: ");
    scanf("%lf", &basic);
    printf("Enter housing allowance: ");
    scanf("%lf", &housing);
    printf("Enter transport allowance: ");
    scanf("%lf", &transport);
    printf("Enter tax deduction: ");
    scanf("%lf", &tax);

    gross = basic + housing + transport;
    net = gross - tax;

    printf("\nGross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f\n", net);

    // Week 3/4 decision making
    if (net >= 20000) {
        printf("Category: High Income\n");
    } else {
        printf("Category: Standard Income\n");
    }

    return 0;
}
