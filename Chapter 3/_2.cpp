// Input raduis from user and displaying circumference.
// use #define to store PI

#include<iostream>
#define PI 3.141593

using namespace std;

int main(){
    float radius;
    float circumference;


    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "Circumference of Circle: " << circumference << endl;
    return 0;
}