#include <stdio.h>

int main(void) {
    char supplierName[50];
    double price, budget;
    int registered, documentsComplete;

    printf("--- TENDER EVALUATION ---\n");

    printf("Enter supplier name (one word): ");
    scanf("%s", supplierName);
    printf("Enter tender price: ");
    scanf("%lf", &price);
    printf("Enter available budget: ");
    scanf("%lf", &budget);
    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);
    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n--- EVALUATION RESULT ---\n");
    printf("Supplier: %s\n", supplierName);

    // Combining logical and relational operators
    if (registered == 1 && documentsComplete == 1 && price <= budget) {
        printf("Status: QUALIFIED\n");
    } else {
        printf("Status: DISQUALIFIED\n");
    }

    return 0;
}
