#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

int main(void) {
    Employee e1 = {1001, "Maria", 18500.50};
    Employee e2 = {1002, "Simon", 17200.00};
    
    // --- 1. TEXT FILE HANDLING ---
    printf("--- TEXT FILE ---\n");
    FILE *fp = fopen("employees.txt", "w");
    if (fp == NULL) {
        printf("Error opening text file!\n");
        return 1;
    }
    fprintf(fp, "%d %s %.2f\n", e1.id, e1.name, e1.salary);
    fprintf(fp, "%d %s %.2f\n", e2.id, e2.name, e2.salary);
    fclose(fp);
    printf("Data saved to employees.txt successfully.\n");

    // Read text file back
    fp = fopen("employees.txt", "r");
    int readId;
    char readName[30];
    double readSalary;
    
    printf("Reading from text file:\n");
    while (fscanf(fp, "%d %29s %lf", &readId, readName, &readSalary) == 3) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", readId, readName, readSalary);
    }
    fclose(fp);

    // --- 2. BINARY FILE HANDLING ---
    printf("\n--- BINARY FILE ---\n");
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }
    fwrite(&e1, sizeof(Employee), 1, fp);
    fwrite(&e2, sizeof(Employee), 1, fp);
    fclose(fp);
    printf("Data saved to employees.dat successfully.\n");

    // Read binary file back
    Employee temp;
    fp = fopen("employees.dat", "rb");
    printf("Reading from binary file:\n");
    while (fread(&temp, sizeof(Employee), 1, fp) == 1) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", temp.id, temp.name, temp.salary);
    }
    fclose(fp);

    return 0;
}
