//hw7-16.cpp - displays three tip amounts
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
		double bill = 0.0;
		double tip = 0.0;
		double rate = 0.1; // Initialize rate

		cout << "Bill amount: ";
		cin >> bill;

		cout << fixed;

		// Use while loop instead of for loop
		while (rate <= 0.2)
		{
				tip = bill * rate;
				cout << setprecision(0);
				cout << rate * 100 << "% tip: ";
				cout << setprecision(2);
				cout << "$" << tip << endl;

				rate += 0.05; // Increment rate by 5%
		} // end while

		return 0;
} // end of main function

