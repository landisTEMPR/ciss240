// File: a02q04.cpp
// Name: Brysen Landis

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << (n % 100000) / 10000 << ' '
              << (n % 10000) / 1000 << ' '
              << (n % 1000) / 100 << ' '
              << (n % 100) / 10 << ' '
              << n % 10 << ' ' << std::endl;

    return 0;
}
