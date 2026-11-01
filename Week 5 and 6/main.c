#include <stdio.h>

int main(void) {
    double salaries[5];
    double total = 0.0, average, highest, lowest;
    int i, found = 0;
    double search_salary;

    printf("--- MUNICIPAL SALARY ANALYSIS ---\n");

    // 1. Capture 5 salaries using a loop
    for (i = 0; i < 5; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
        
        total += salaries[i];

        // Initialize highest and lowest with the very first salary
        if (i == 0) {
            highest = salaries[i];
            lowest = salaries[i];
        }
        
        // Check for new highest/lowest
        if (salaries[i] > highest) highest = salaries[i];
        if (salaries[i] < lowest) lowest = salaries[i];
    }

    average = total / 5;

    // 2. Display the results
    printf("\n--- SALARY REPORT ---\n");
    printf("Total Payroll:   N$ %.2f\n", total);
    printf("Average Salary:  N$ %.2f\n", average);
    printf("Highest Salary:  N$ %.2f\n", highest);
    printf("Lowest Salary:   N$ %.2f\n", lowest);

    // 3. Search for a specific salary (Linear Search)
    printf("\nEnter a salary to search for: ");
    scanf("%lf", &search_salary);

    for (i = 0; i < 5; i++) {
        if (salaries[i] == search_salary) {
            printf("Result: Salary found at position %d (Employee %d)\n", i, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Result: Salary not found in the records.\n");
    }

    return 0;
}
