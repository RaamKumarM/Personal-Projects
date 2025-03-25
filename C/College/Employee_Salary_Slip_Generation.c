#include <stdio.h>

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

int main() {
    struct Employee emp;

    // Taking input from user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.name);  // To read full name with spaces
    
    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic_salary);
    
    printf("Enter Allowances: ");
    scanf("%f", &emp.allowances);
    
    printf("Enter Deductions: ");
    scanf("%f", &emp.deductions);

    // Generate salary slip
    generate_salary_slip(emp);

    return 0;
}
