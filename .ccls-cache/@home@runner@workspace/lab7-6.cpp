//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <your name> on <current date>


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
		double price, total = 0.0;
		int count = 0;

		cout << "Enter a price (-1 to stop): ";
		cin >> price;

		// Process prices until the sentinel value (-1) is entered
		while (price != -1) {
				total += price;
				count++;

				// Get the next input **inside** the loop to prevent infinite looping
				cout << "Next price (-1 to stop): ";
				cin >> price;
		}

		// Check if any values were entered before computing the average
		if (count > 0) {
				double average = total / count;
				cout << fixed << setprecision(2);
				cout << "\nTotal amount: $" << total << endl;
				cout << "Average price: $" << average << endl;
		} else {
				cout << "No prices entered." << endl;
		}

		return 0;
}

//end of main function