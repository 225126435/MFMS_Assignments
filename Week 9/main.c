#include <stdio.h>
#include "employees.h"

int main(void) {
    printf("Municipal Financial Management System\n");
    printf("-------------------------------------\n");
    
    addEmployee();
    listEmployees();
    
    double total = calculatePayrollTotal();
    printf("Total Payroll: N$ %.2f\n", total);

    return 0;
}
