// File: a04q05.cpp
// Name: Brysen Landis

#include <iostream>
#include <iomanip>

int main()
{
    const double PI = 3.14159;
    
    double height, weight, thumbLength, skullRadius;
    int classes, numFingers;
    
    std::cin >> height >> weight >> thumbLength >> skullRadius >> classes >> numFingers;
    
    double iq = PI * skullRadius * skullRadius + (weight / (height + thumbLength)) * classes + 5 / numFingers;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << iq << std::endl;
    
    return 0;
}
