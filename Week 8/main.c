#include <stdio.h>

// Function Prototypes
void displayWelcome(void);
void displayMenu(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);

int main(void) {
    displayWelcome();
    int choice;
    // Hardcoded employee IDs for the search function
    int employeeIDs[] = {101, 102, 103, 104, 105}; 

    do {
        displayMenu();
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                float amount;
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("VAT (15%%): %.2f\n", calculateVAT(amount));
                break;
            }
            case 2: {
                float basic, housing, transport;
                printf("Enter basic, housing, transport: ");
                scanf("%f %f %f", &basic, &housing, &transport);
                printf("Gross Salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;
            }
            case 3: {
                float revenue, expenses;
                printf("Enter revenue and expenses: ");
                scanf("%f %f", &revenue, &expenses);
                float balance = calculateBudget(revenue, expenses);
                printf("Budget Balance: %.2f (", balance);
                if (balance > 0) printf("SURPLUS)\n");
                else if (balance < 0) printf("DEFICIT)\n");
                else printf("BALANCED)\n");
                break;
            }
            case 4: {
                int searchId;
                printf("Enter employee ID to search: ");
                scanf("%d", &searchId);
                int pos = searchEmployee(searchId, employeeIDs, 5);
                if (pos != -1) printf("Employee found at position %d\n", pos);
                else printf("Employee not found.\n");
                break;
            }
            case 5:
                printf("Exiting system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function Definitions
void displayWelcome(void) {
    printf("Welcome to the Municipal Financial Management System\n");
}

void displayMenu(void) {
    printf("\n--- MFMS MENU ---\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1; // Not found
}
