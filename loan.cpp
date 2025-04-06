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
    if (balance < 0) {
        balance = 0;
    }
    if (interestRate < 0 || interestRate > 1) {
        interestRate = 0;
    }
    if (payment < 0) {
        payment = 0;
    }
    // Generate the monthly report
    for (int i = 1; i <= 12; i++) {
        double interest = balance * (interestRate / 12);
        balance = balance + interest - payment;
        cout << i << "\t" << balance << endl;
        if (balance < 0) {
            break;
        }
    }
    return 0;
}
