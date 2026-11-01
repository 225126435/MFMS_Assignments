#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

// 1. Swap function using pointers
void swapSalaries(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Modify a struct using a pointer and the arrow operator
void updateSalary(Employee *e, double newSalary) {
    e->salary = newSalary;
}

int main(void) {
    // --- Task 1: Pointer Basics ---
    int age = 25;
    int *p = &age; // p holds the address of age
    
    printf("--- POINTER BASICS ---\n");
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", (void*)&age);
    printf("Value using pointer (*p): %d\n", *p);
    
    *p = 30; // Change value through pointer
    printf("New value of age after *p = 30: %d\n", age);

    // --- Task 2: Swap Salaries ---
    printf("\n--- SWAP SALARIES ---\n");
    double salaryA = 18500.50;
    double salaryB = 21000.75;
    printf("Before swap: A = %.2f, B = %.2f\n", salaryA, salaryB);
    
    swapSalaries(&salaryA, &salaryB); // Pass addresses
    
    printf("After swap:  A = %.2f, B = %.2f\n", salaryA, salaryB);

    // --- Task 3: Modify Struct via Pointer ---
    printf("\n--- UPDATE STRUCT VIA POINTER ---\n");
    Employee maria = {1001, "Maria", 15000.00};
    printf("Before update: %s earns N$ %.2f\n", maria.name, maria.salary);
    
    updateSalary(&maria, 20000.00); // Pass address of struct
    
    printf("After update:  %s earns N$ %.2f\n", maria.name, maria.salary);

    return 0;
}
