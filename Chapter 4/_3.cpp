        // Calculate and print the area of square with given height and width

#include<iostream>
#include <windows.h>


using namespace std;

int main(){
    int height, weight, area;

    height = 8;
    weight = 4;
    area = height * weight;
    Beep(750, 300); // Frequency: 750 Hz, Duration: 300 ms
    cout << "Area of Square is " << area << endl;
    return 0;
}