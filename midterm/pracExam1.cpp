// File: pracExam1
// Name: Brysen Landis

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    int digit = 0;
    std::cout << "Please enter a digit from 0 - 9: ";
    std::cin >> digit;

    int col1 = 0, col2 = 0, col3 = 0;
    
    if (digit == 0)
    {
        col1 = 88888;
        col2 = 81118;
        col3 = 88888;
    }
    else if (digit == 1)
    {
        col1 = 11811;
        col2 = 11811;
        col3 = 11811;
    }
    else if (digit == 2)
    {
        col1 = 88888;
        col2 = 11818;
        col3 = 88881;
    }
    else if (digit == 3)
    {
        col1 = 81818;
        col2 = 81818;
        col3 = 88888;
    }
    else if (digit == 4)
    {
        col1 = 81881;
        col2 = 81888;
        col3 = 11811;
    }
    else if (digit == 5)
    {
        col1 = 88818;
        col2 = 81818;
        col3 = 81888;
    }
    else if (digit == 6)
    {
        col1 = 88818;
        col2 = 81888;
        col3 = 81888;
    }
    else if (digit == 7)
    {
        col1 = 88811;
        col2 = 11811;
        col3 = 11811;
    }
    else if (digit == 8)
    {
        col1 = 88888;
        col2 = 81818;
        col3 = 88888;
    }
    else if (digit == 9)
    {
        col1 = 88888;
        col2 = 81818;
        col3 = 88811;
    }

    int offset1 = (rand() % 7) - 3;
    int offset2 = (rand() % 7) - 3;
    int offset3 = (rand() % 7) - 3;

    col1 += offset1;
    col2 += offset2;
    col3 += offset3;

    std::cout << col1 << ' ' << col2 << ' ' << col3 << std::endl;
    
    return 0;
}
