#include <iostream>
#include <iomanip>

using namespace std;


int main (int argc, char** argv) {
    double balance;
    double interestRate;
    double payment;

    // Prompt for starting balance, interest rate, and 
    // monthly payment
    cout << "Starting loan balance: " << flush;
    cin >> balance;

    cout << "Annual interest rate: " << flush;
    cin >> interestRate;

    cout << "Monthly payment: " << flush;
    cin >> payment;

    // Set output formatting
    // 2 decimal places (fixed)
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print heading
    cout << "\n" << "Month" << "\t" << "Balance" << endl;

    // Validate input
    
        //TODO

    // Generate the monthly report

        //TODO

    return 0;
}
