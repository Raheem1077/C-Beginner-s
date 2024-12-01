        // Display the values of different variables using showpoint manipulator

#include <iostream>
#include <iomanip> // For std::fixed, std::setprecision, and std::showpoint

int main(){
    double x = 15.674, y = 235.73, z = 9525.9864;

    std::cout << std::fixed << std::setprecision(2) << std::showpoint;
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "z = " << z << "\n";

    std::cout << std::setprecision(3);
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "z = " << z << "\n";

    std::cout << std::setprecision(4);
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "z = " << z << "\n";

    return 0;
}
