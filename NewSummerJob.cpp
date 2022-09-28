// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

// Named constants
const double TAXRATE = .15;


int main()
{

	// Variable declaration
	string fullName;

	double wage;
	double hoursWorked;
	double totalEarned;
	double netEarned;

	double shoppingCost;
	double entertainmentCost;
	
	double savings;

	double totalShopping;
	double totalEntertainment;
	double totalSaved;
	double totalTax;

	double totalExpenses;
	double remainder;
	

	//Program title and description for the user

	cout << "This program calculates expenses for a given wage." << endl << endl;

	// User input

	cout << "Please Input Full Name:" << endl;
	getline(cin, fullName);
	cout << endl;

	cout << "Please Input Wage per Hour:" << endl;
	cin >> wage;
	cout << endl;

	cout << "Please Input Hours Worked:" << endl;
	cin >> hoursWorked;
	cout << endl;

	cout << "What percentage (In decimal Form) will go to Shopping?" << endl;
	cin >> shoppingCost;
	cout << endl;

	cout << "What percentage (In decimal Form) will go to Entertainment?" << endl;
	cin >> entertainmentCost;
	cout << endl;

	cout << "What percentage (In decimal Form) will go to Savings?" << endl;
	cin >> savings;
	cout << endl;

	// Calculations

	totalEarned = wage * hoursWorked;
	totalTax = (totalEarned * TAXRATE);
	netEarned = totalEarned - totalTax;

	totalShopping = (netEarned * shoppingCost);
	totalEntertainment = (netEarned * entertainmentCost);
	totalSaved = (netEarned * savings);
	

	totalExpenses = totalShopping + totalEntertainment + totalSaved + totalTax;


	remainder = totalEarned - totalExpenses;

	// Output to the screen

	cout << setprecision(2) << fixed << showpoint << endl; 
	system("cls");

	cout << left << "Name: " << setw(42) << right << fullName << endl;
	cout << left << "Total Earned:" << setw(24) << right << "$ " << totalEarned << endl;
	cout << left << "Taxes:" << setw(31) << right << "$ " << totalTax << endl;
	cout << left << "Total spent Shopping: " << setw(15) << right << "$ " << totalShopping << endl;
	cout << left << "Total spent on Entertainment: " << setw(7) << right << "$ " << totalEntertainment << endl;
	cout << left << "Total Saved: " << setw(24) << right << "$ " << totalSaved << endl;
	cout << left << "Total Remaining: " << setw(20) << right << "$ " << remainder << endl;


	return 0;
}
