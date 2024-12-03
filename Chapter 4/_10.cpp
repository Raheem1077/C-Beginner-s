        // Calculate Interest Rate

#include<iostream>

using namespace std;

int main(){
    double principalAmount;
    float rateOfInterest;
    int numberOfYears;
    double interest;

    cout << "Enter the principal amount: ";
    cin >> principalAmount;
    cout << "Enter the number of Years: ";
    cin >> numberOfYears;
    cout << "Enter the rate of Interest: ";
    cin >> rateOfInterest;

    interest = (principalAmount * rateOfInterest * numberOfYears / 100 );

    cout << "Principal Amount: " << principalAmount << endl;
    cout << "Interest Rate   : " << rateOfInterest << endl;
    cout << "Time            : " << numberOfYears << endl;
    cout << "Simple Interest Amount : " << interest << endl;
    return 0;
}