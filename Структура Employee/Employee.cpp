#include <iostream>
#include "Employee.h"


void enterEmployeeData(Employee& emp)
{
	std::cout << "Введите номер сотрудника:" << "\n";
	std::cin >> emp.employeeNumber;
	std::cout << "Введите пособие сотрудника:" << "\n";
	std::cin >> emp.allowance;
}

void displayAllowance(const Employee& emp)
{
	std::cout << "Номер сотрудника:" << emp.employeeNumber<< "\n";
	std::cout << "Пособие сотрудника в $:" << emp.allowance << "\n";
	std::cout << "\n";
}
