// File: a04q01.cpp
// Name: Brysen Landis

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    double discriminant = sqrt(b * b - 4 * a * c);
    
    double root1 = (-b - discriminant) / (2 * a);
    double root2 = (-b + discriminant) / (2 * a);
    
    std::cout << std::fixed << std::setprecision(5);
    std::cout << root1 << " " << root2 << std::endl;

    return 0;
}
