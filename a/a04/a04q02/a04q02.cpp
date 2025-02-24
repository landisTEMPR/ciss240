// File: a04q02.cpp
// Name: Brysen Landis

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int x0, x1, x2, x3, x4;
    std::cin >> x0 >> x1 >> x2 >> x3 >> x4;
    
    double avg = (x0 + x1 + x2 + x3 + x4) / 5.0;
    
    double dev = sqrt(
        ((x0 - avg) * (x0 - avg) + 
         (x1 - avg) * (x1 - avg) + 
         (x2 - avg) * (x2 - avg) + 
         (x3 - avg) * (x3 - avg) + 
         (x4 - avg) * (x4 - avg)) / 5.0);
    
    std::cout << std::fixed << std::setprecision(5);
    std::cout << dev << std::endl;
    
    return 0;
}
