        // Divide two float variable and finds remainder by using explicit casting

#include<iostream>

using namespace std;

int main(){
    float a, b;
    int c;
    a = 10.3;
    b = 5.2;

    c = (int) a % (int) b;

    // In C++ you cannot divide float by float, compiler will give error
    cout << a << " % " << b << " = " << c << endl;;
    return 0;
}