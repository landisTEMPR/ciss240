// File: a03q01.cpp
// Name: Brysen Landis
#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    
    int y = x % 9;
    
    int d0 = x / 1000;
    int d1 = x / 100 % 10;
    int d2 = x / 10 % 10;
    int d3 = x % 10;
    int d4 = d0 + d1 + d2 + d3;
    
    int d5 = d4 % 9;
    
    std::cout << y << ' ' << d4 << ' ' << d5 << '\n';

    return 0;
}
