// File: a03q02.cpp
// Name: Brysen Landis

#include <iostream>

int main()
{
    int d4 = 0, d3 = 0, d2 = 0, d1 = 0, d0 = 0;
    std::cin >> d4 >> d3 >> d2 >> d1 >> d0;
    
    int x = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d0;
    std::cout << x << '\n';
    
    return 0;
}
