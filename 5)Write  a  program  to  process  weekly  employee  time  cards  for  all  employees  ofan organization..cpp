/*
Write  a  program  to  process  weekly  employee  time  cards  for  all  employees  ofan organization.  Each  employee  will  have  three  data  items:  an  identificationnumber,  the hourly wage rate, andthe number of hours worked during a givenweek. Each employee is to be paid time and a half for all hours worked over40. A tax amount of 3.625% of gross salary will be deducted. The program outputshould show the employee’s number and net pay. Display the total payrolland the average amount paid at the end of the run*/


#include <iostream>
#include <string>
using namespace std;


int main()
{
	int ID, emp_count = 0;
	double hourly_wage, hours_worked, overtime_pay, gross_salary, net_pay, avg_amount, payroll = 0; 
	char answer = 'n';

	do
	{
		cout << "Enter employee ID: " << endl;
		cin >> ID;

		cout << "Enter number of hours worked: " << endl;
		cin >> hours_worked;

		cout << "Enter hourly wage: " << endl;
		cin >> hourly_wage;

		if (hours_worked > 40)

		{
			overtime_pay = hours_worked * 1.5 * hourly_wage;
			gross_salary = overtime_pay - (hours_worked * hourly_wage);
			net_pay = gross_salary - (3.625 / gross_salary * 100);
		
		}

		else
		{
		gross_salary = hours_worked * hourly_wage;
		net_pay = gross_salary - (3.625 / gross_salary * 100);
			
		}
		avg_amount = payroll / emp_count;
		payroll += net_pay;
		emp_count++;
		

		cout << "Employee ID: " << ID << endl;
		cout << "Net pay: " << "$" << net_pay << endl;
		cout << "Average amount paid: " << "$" << avg_amount << endl;
		cout << "Total payroll: " << "$" << payroll << endl;


	 cout << "Do you want to enter another employee? (y/n)?" << endl;
		cin >> answer;


	} while (answer == 'y');

	

	return 0;
}