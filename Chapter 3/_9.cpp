        // Solve the expression a * b / ( -c * 31 % 13 ) * d

#include<iostream>

using namespace std;

int main(){

    int a = 10, b = 20, c = 15, d = 8, e = 40;
    int result;

    result = a * b / ( -c * 31 % 13 ) * d;

    cout << "The result of the expression is: " << result << endl;
    return 0;
}