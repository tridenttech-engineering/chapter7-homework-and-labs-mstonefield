//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;
    int day = 1; // Initialize counter

    // Loop using while instead of for
    while (day <= 7) {
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day++; // Increment day counter
    }

    // Calculate the average
    average = static_cast<double>(totalTexts) / 7; // Corrected denominator

    // Display output with 0 decimal places
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages per day." << endl;

    return 0;
}   //end of main function