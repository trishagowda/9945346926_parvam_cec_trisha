//simple interest and compond interest
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter interest rate (as a decimal): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

   
    double simpleInterest = (principal * rate * time);


    double compoundInterest = principal * (pow((1 + rate), time)) - principal;

    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}