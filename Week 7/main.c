#include <stdio.h>
#include <string.h> // Required for string functions

int main(void) {
    char name[100], email[100], phone[20], town[50];
    char search_name[100];
    char backup[100];
    char description[200];

    printf("--- SUPPLIER MANAGEMENT ---\n");

    // Task 1: Capture Supplier Details
    printf("Enter supplier name (one word): ");
    scanf("%s", name);
    printf("Enter email: ");
    scanf("%s", email);
    printf("Enter phone: ");
    scanf("%s", phone);
    printf("Enter town: ");
    scanf("%s", town);

    // Display Details
    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name:  %s\n", name);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town:  %s\n", town);

    // Task 2: strlen (String Length)
    printf("\nName length: %lu characters\n", strlen(name));

    // Task 3: strcmp (Search)
    printf("\nEnter a supplier name to search: ");
    scanf("%s", search_name);
    
    // strcmp returns 0 if the strings are exactly the same
    if (strcmp(name, search_name) == 0) {
        printf("Result: Supplier FOUND.\n");
    } else {
        printf("Result: Supplier NOT FOUND.\n");
    }

    // Task 4: strcpy (Copy)
    strcpy(backup, name);
    printf("\nBackup created. Copied name: %s\n", backup);

    // Task 5: strcat (Concatenate/Join)
    strcpy(description, name);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");
    printf("Generated Description: %s\n", description);

    return 0;
}
