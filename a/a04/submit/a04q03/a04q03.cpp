// File: a04q03.cpp
// Name: Brysen Landis

#include <iostream>
#include <iomanip>

int main()
{
   double a, b, c, d, e, f;
   int n;
   
   std::cin >> a >> b >> c >> d >> e >> f >> n;
   
   double coef4 = a * d;
   double coef3 = a * e + b * d;
   double coef2 = a * f + b * e + c * d;  
   double coef1 = b * f + c * e;
   double coef0 = c * f;

   std::cout << std::fixed << std::setprecision(n);
   std::cout << "(" << a << "x^2 + " << b << "x + " << c << ")";
   std::cout << "(" << d << "x^2 + " << e << "x + " << f << ") = ";
   std::cout << coef4 << "x^4 + " << coef3 << "x^3 + " << coef2 << "x^2 + ";
   std::cout << coef1 << "x + " << coef0 << std::endl;
   
   return 0;
}
