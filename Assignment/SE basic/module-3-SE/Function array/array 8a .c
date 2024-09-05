/* 8a Write a program of structure employee that provides the following 
a. information -print and display empno, empname, address 
andage */
#include <stdio.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};
void inputEmployeeDetails(struct Employee *emp) {
    printf("Enter Employee Number: ");
    scanf("%d", &emp->empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp->empname);
    printf("Enter Address: ");
    scanf("%s", emp->address);
    printf("Enter Age: ");
    scanf("%d", &emp->age);
}
void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    int i;
    struct Employee employees[5];
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        inputEmployeeDetails(&employees[i]);
    }
printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }

    return 0;
}
