#include <stdio.h>
#include <stdlib.h>

// Structure to store employee details
struct Employee {
    char name[50];
    int id;
    float basic_salary;
    float allowances;
    float deductions;
};

// Function to calculate net salary
float calculate_net_salary(float basic, float allowances, float deductions) {
    return (basic + allowances - deductions);
}

// Function to display salary slip
void generate_salary_slip(struct Employee emp) {
    float net_salary = calculate_net_salary(emp.basic_salary, emp.allowances, emp.deductions);
    
    printf("\n=====================================\n");
    printf("\t EMPLOYEE SALARY SLIP \n");
    printf("=====================================\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic_salary);
    printf("Allowances    : %.2f\n", emp.allowances);
    printf("Deductions    : %.2f\n", emp.deductions);
    printf("-------------------------------------\n");
    printf("Net Salary    : %.2f\n", net_salary);
    printf("=====================================\n");
}

// Function to get input from user (Fixed: Pass by reference)
void getinput(struct Employee *emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp->name);  // Read full name with spaces
    
    printf("Enter Basic Salary: ");
    scanf("%f", &emp->basic_salary);
    
    printf("Enter Allowances: ");
    scanf("%f", &emp->allowances);
    
    printf("Enter Deductions: ");
    scanf("%f", &emp->deductions);
}

int main() {
    struct Employee emp;
    int n = 0;

    while (1) {
        printf("===============================================\n");
        printf("\t EMPLOYEE SALARY SLIP GENERATOR \n\n");
        printf("1. Input Details\n");
        printf("2. Generate Slip\n");
        printf("3. Exit\n\n");
        printf("===============================================\n");

        printf("Make your Choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                getinput(&emp); // Fixed: Pass by reference
                break;

            case 2:
                generate_salary_slip(emp);
                break;
            
            case 3:
                printf("\nThank You !!!\n");
                return 0;

            default:
                printf("\nINVALID !!!\n\n");
                continue;
        }
    }

    return 0;
}
