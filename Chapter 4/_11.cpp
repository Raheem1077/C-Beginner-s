        // Input Character and Display its ASCII value

#include<iostream>

using namespace std;

int main(){

    char character;

    cout << "Enter a character: ";
    cin >> character;
    
    cout << "\nASCII value of " << character << ": " << (int) character;
    return 0;
}