#include <iostream>
#include <cmath>
#include "q.h"

int main() {
    funct::pow1 second{};
    std::cout << "a * pow(x, 2) + b * x + c" << "\n";
    std::cout << "Enter const of this equation" << "\n";
    std::cin >> second.a >> second.b >> second.c;


        std::cout << second.a << "*" << "x^2" << "+" << second.b << "*" << "x" << "+" << second.c << "\n";
        second.d = pow(second.b, 2) - 4 * second.a * second.c;
        std::cout<<"Discriminant ="<<second.d<<"\n";
        if (second.d < 0)
            std::cout << "Equation is wrong" << "\n";
        if (second.d == 0) {
            std::cout << "There is only one solution" << "\n";
            second.x = -second.b / (2 * second.a);
            std::cout << "X =" << second.x << "\n";
        }
        if (second.d > 0) {
            second.x1 = (-second.b + sqrt(second.d)) / (2 * second.a);
            second.x2 = (-second.b - sqrt(second.d)) / (2 * second.a);
            std::cout << "X1 =" << second.x1 << "\n" << "X2 =" << second.x2 << "\n";
        }
        std::cout << "________________________________________________" << "\n";

if (second.d>=0) {
    std::cout << 2 << "*" << second.a << "*" << "x" << "+" << second.b << "\n";
    second.X = -(second.b) / (2 * second.a);
    if (second.a > 0)
        std::cout << "X (Min) = " << second.X;
    if (second.a < 0)
        std::cout << "X (Max) = " << second.X;
}
        return 0;
    }
