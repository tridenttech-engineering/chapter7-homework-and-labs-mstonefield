//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sales, growthRate = 0.055; 
    int years = 0;

    cout << "Enter current sales amount: ";
    cin >> sales;

    while (sales < 150000) {
        double annualIncrease = sales * growthRate;
        sales += annualIncrease;
        years++;
    }

    cout << fixed << setprecision(2);
    cout << "It will take " << years << " years for sales to reach at least $150,000." << endl;
    cout << "Final sales amount: $" << sales << endl;

    return 0;
} //end of main function
