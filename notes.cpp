#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    /*
    // bubblesort on 4 variabels
    int x0, x1, x2, x3, t;
    std::cin >> x0 >> x1 >> x2 >> x3;

    std::cout << "Pass one:\n"; // sends largest number to the far right
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t; 
    }
     std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 <<std::endl;
    if (x1 > x2)
    {
        t = x1;
        x1 = x2;
        x2 = t;
    }

    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 <<std::endl;
    if (x2 > x3)
    {
        t = x2;
        x2 = x3;
        x3 = t;
    }

    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 <<std::endl;
    std::cout << "Pass two:\n"; // sends second largest number to the second to most right position
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t; 
    }
     std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 <<std::endl;
    if (x1 > x2)
    {
        t = x1;
        x1 = x2;
        x2 = t;
    }

    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 <<std::endl;   
    std::cout << "Pass three:\n"; // sends the third largest number to the third most right position
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t; 
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 <<std::endl;

    // increment operators
    int i = 5;
    std::cout << i << '\n';
      ++i;   // pre-increment operator. gives you the value
    int j = ++i;
    std::cout << i << ' ' << j << '\n';
    
    i = 5;
     i++ // post-increment operator.
    j = i++;
    std::cout << i << ' ' << j << '\n';

    // both operators work with plus and minus signs


    // increment operators 2
    int i = 5;
    int j = 3;
    i += j; // takes the orignal variable and increases it by the second variable. Essentially this gives the user the ability to increase i by what ever j is.
    i -=j; // decrements i by j. Same concept as the += operator.
    i = 5;
    j = 3;
    int k = (i+=j);
    std::cout << i << ' ' << j <<  ' ' << k << '\n';

    */

    // for loops part-1

    for (int i = 10; i >= 4; i-= 2)
    {
        std::cout << i << std::endl;

    }

    
    return 0;    
}

