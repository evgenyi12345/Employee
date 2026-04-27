#include <iostream>
#include "Employee.h"

int main() {
	setlocale(LC_ALL, "RU");

	std::cout << "---Програма 'Employee' начала свою работу!---" << "\n";
	
	Employee Tod1;
	Employee Greek2;
	Employee Michael3;

	std::cout << "Ввод данных для первого сотрудника 'Tod'" << "\n";
	enterEmployeeData(Tod1);

	std::cout << "Ввод данных для второго сотрудника 'Greek'" << "\n";
	enterEmployeeData(Greek2);

	std::cout << "Ввод данных для третьего сотрудника 'Michael'" << "\n";
	enterEmployeeData(Michael3); 
	
	std::cout << "Сотрудник 'Tod'" << "\n";
	displayAllowance(Tod1);

	std::cout << "Сотрудник 'Greek'" << "\n";
	displayAllowance(Greek2);

	std::cout << "Сотрудник 'Michael'" << "\n";
	displayAllowance(Michael3);

	std::cout << "---Програма 'Employee' закончила свою работу!---" << "\n";

	return 0;
}