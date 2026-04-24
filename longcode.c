#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining a structure to hold expense data
struct Expense {
    char date[20];
    char description[50];
    float amount;
};

void addExpense() {
    struct Expense e;
    FILE *fp = fopen("expenses.txt", "a"); // "a" means append (don't overwrite)

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Date (DD-MM-YYYY): ");
    scanf("%s", e.date);
    printf("Enter Description: ");
    scanf(" %[^\n]s", e.description); // Reads string with spaces
    printf("Enter Amount: ");
    scanf("%f", &e.amount);

    fprintf(fp, "%s | %-20s | $%.2f\n", e.date, e.description, e.amount);
    fclose(fp);
    printf("Expense saved successfully!\n");
}

void viewExpenses() {
    char line[100];
    FILE *fp = fopen("expenses.txt", "r"); // "r" for read

    if (fp == NULL) {
        printf("\nNo expenses found. Start by adding one!\n");
        return;
    }

    printf("\n--- Your Recorded Expenses ---\n");
    printf("Date       | Description          | Amount\n");
    printf("------------------------------------------\n");
    
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    
    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n===== PERSONAL EXPENSE TRACKER =====");
        printf("\n1. Add New Expense");
        printf("\n2. View All Expenses");
        printf("\n3. Exit");
        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addExpense(); break;
            case 2: viewExpenses(); break;
            case 3: 
                printf("Goodbye! Keep saving money.\n");
                exit(0);
            default: printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}