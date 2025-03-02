//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double bill, total = 0.0;
	int count = 0;

	cout << "Enter monthly electric bill amount (-1 to stop): ";
	cin >> bill;

	// Process bills until the sentinel value (-1) is entered
	while (bill != -1) {
			total += bill;
			count++;

			cout << "Enter monthly electric bill amount (-1 to stop): ";
			cin >> bill;
	}

	// Check to prevent division by zero
	if (count > 0) {
			double average = total / count;
			cout << fixed << setprecision(2);
			cout << "\nTotal amount: $" << total << endl;
			cout << "Average bill: $" << average << endl;
	} else {
			cout << "No bills entered." << endl;
	}

	return 0;
}	//end of main function