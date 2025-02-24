// File: a03q03.cpp
// Name: Brysen Landis

#include <iostream>

int main()
{
    int plaintext = 0;
    std::cin >> plaintext;

    int a = plaintext / 10000;
    int b = plaintext / 1000 % 10;
    int c = plaintext / 100 % 10;
    int d = plaintext / 10 % 10;
    int e = plaintext % 10;

    int e1 = (e + 1) % 10;
    int d1 = c;
    int c1 = d;
    int a1 = b;
    int b1 = a;

    int ciphertext = (a1 * 10000) + (b1 * 1000) + (c1 * 100) + (d1 * 10) + e1;
    
    std::cout << a << b << c << d << e << ' ' << ciphertext << '\n';
    return 0;
}
