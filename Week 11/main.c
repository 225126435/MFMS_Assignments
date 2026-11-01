#include <stdio.h>
#include <string.h>

// 1. Define the nested Date structure
typedef struct {
    int day;
    int month;
    int year;
} Date;

// 2. Define the Employee structure using the Date structure
typedef struct {
    int id;
    char name[30];
    Date hired; // Nested structure
    double salary;
} Employee;

// 3. Function that receives a structure
void displayEmployee(Employee e) {
    printf("ID: %d | Name: %-10s | Salary: N$ %.2f | Hired: %02d/%02d/%d\n", 
           e.id, e.name, e.salary, e.hired.day, e.hired.month, e.hired.year);
}

int main(void) {
    // 4. Create an array of structures
    Employee staff[3] = {
        {1001, "Maria", {15, 3, 2022}, 18500.50},
        {1002, "Simon", {10, 8, 2021}, 17200.00},
        {1003, "Anna",  {05, 11, 2023}, 21000.75}
    };

    printf("--- MFMS RECORDS ---\n");
    
    // 5. Loop through the array
    for (int i = 0; i < 3; i++) {
        displayEmployee(staff[i]);
    }

    return 0;
}
