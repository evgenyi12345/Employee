#ifndef EMPLOYEE_H
#define EMPLOYEE_H

struct Employee {
	int employeeNumber;                          //номер сотрудника
	float allowance;                             //величина пособия
};

void enterEmployeeData(Employee& emp);                      //функция для вывода номера сотрудника
void displayAllowance(const Employee& emp);                         //функция для вывода результата 

#endif
