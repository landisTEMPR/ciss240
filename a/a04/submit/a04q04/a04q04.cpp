// File: a04q04.cpp
// Name: Brysen Landis

#include <iostream>
#include <iomanip>

int main() {
    double a, b, A, c, d, B;
    int n;
    
    std::cin >> a >> b >> A >> c >> d >> B >> n;
    
    std::cout << std::fixed << std::setprecision(n);
    
    std::cout << a << "x + " << b << "y = " << A << std::endl;
    std::cout << c << "x + " << d << "y = " << B << std::endl;
    
    double det = a * d - b * c;
    double x = (A * d - b * B) / det;
    double y = (a * B - c * A) / det;
    
    std::cout << "solution: x = " << x << ", y = " << y << std::endl;
    
    return 0;
}
