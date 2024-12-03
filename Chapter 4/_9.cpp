        // Standard Input

#include<iostream>

using namespace std;

int main(){

    char name[25], address[30];
    int age;

    cout << "Enter your name   : ";
    cin >> name;
    cout << "Enter your age    : ";
    cin >> age;
    cout << "Enter your address: ";
    cin >> address;

    cout << "\n\n";

    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << endl;
    cout << "Address: " << address << endl;
    
    return 0;
}