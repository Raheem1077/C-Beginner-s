        // Program describing the difference b/w Postfix and Prefix increment
        // operator as independent expression

#include<iostream>

using namespace std;

int main(){

    int a, b, x, y;

    a = b = x = y = 0;

    a++;
    b = a;
    ++x; 
    y = x;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}