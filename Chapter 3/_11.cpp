        // Display the sizes of different Data Types

#include<iostream>

using namespace std;

int main(){
    // The size of each depends upon the architecture of the machine you are using
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of char: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
    return 0;
}