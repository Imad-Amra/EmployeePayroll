//Imad Amra, CSC240-300
#include "Payroll.h"

//constructors-----------------------------------
Payroll::Payroll() {
	hours = new double;
	payRate = new double;
}

//deconstructors---------------------------------
Payroll::~Payroll() {
	delete hours;
	delete payRate;
}

//observers-------------------------------------
double Payroll::getGrossPay() const {
	if (*hours > 40) {
		return (40 * *payRate) + (*hours - 40) * (1.5 * *payRate);
	}
	else {
		return *hours * *payRate; 
	}
}

//transformers----------------------------------
void Payroll::setHours(double h) {
	*hours = h;
}

void Payroll::setPayRate(double p) {
	*payRate = p;
}