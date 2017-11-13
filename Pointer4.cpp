// Pointer4.cpp : A program that displays an array using a pointer in the parameter


#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
void displayPayRates(const double *rates, int size);


int main()
{	
	const int SIZE = 6;
	const double payRates[SIZE] = { 18.55, 17.45, 12.85, 14.97, 10.35, 18.89 };

	displayPayRates(payRates, SIZE);

	cin.ignore();
	cin.get();
    return 0;
}

void displayPayRates(const double *rates, int size)
{
	// set numberic output formatting
	cout << setprecision(2) << fixed << showpoint;

	// display the array contents
	for (int count = 0; count < size; count++)
	{
		cout << "pay rate for employee " << (count + 1) << " is $"
			<< *(rates + count) << endl;
	}
}

