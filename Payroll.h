//Imad Amra, CSC240-300
#ifndef PAYROLL_H
#define PAYROLL_H
using namespace std;

class Payroll
{
private:
	double *hours;
	double *payRate;

public:
	//constructor
	Payroll();

	//deconstructor
	~Payroll();

	//observer
	double getGrossPay() const;

	//transformers
	void setHours(double h);
	void setPayRate(double p);
};

#endif

