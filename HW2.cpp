//Imad Amra, CSC240-300
#include <iostream>
#include <iomanip>
#include "Payroll.h"
using namespace std;

void input(Payroll* const employees, const int size);
void output(const Payroll* const employees, const int size);

int main()
{
	const int size = 7;
	Payroll* employees = new Payroll[size]; //dynamically allocating the array here

	input(employees, size);
	output(employees, size);

	delete[] employees; //releasing the dynamically allocated memory here
	return 0;
}//end of main---------------------

void input(Payroll* const employees, const int size) {
	double hours;
	double payRate;

	for (int i = 0; i < size; i++) {
		
		cout << "Hours for employee " << (i + 1) << ": ";
		cin >> hours;
		employees[i].setHours(hours);

		cout << "Pay rate for employee " << (i + 1) << ": ";
		cin	>> payRate;
		employees[i].setPayRate(payRate);

		cout << endl;
	}
}//end of input----------------------------

void output(const Payroll* const employees, const int size) {
	double hours;
	double payRate;

	cout << fixed << showpoint << setprecision(2);

	cout << setw(15) << "Employees" << setw(20) << "Gross Pay" << endl;
	cout << setw(15) << "=========" << setw(20) << "=========" << endl;

	for (int i = 0; i < size; i++) {
		cout << setw(15) << "Employee " << (i + 1) << ": " << setw(12) << " $" << employees[i].getGrossPay() << endl;
	}
}//end of output-----------------------------
