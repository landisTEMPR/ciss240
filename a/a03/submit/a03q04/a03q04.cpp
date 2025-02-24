// File: a03q04.cpp
// Name: Brysen Landis

#include <iostream>
#include <iomanip> // For setfill and setw

int main()
{
    int time1;
    std::cin >> time1;
    int time2;
    std::cin >> time2;
    
    int hours1 = time1 / 10000;
    int minutes1 = (time1 / 100) % 100;
    int seconds1 = time1 % 100; 
    
    int hours2 = time2 / 10000;
    int minutes2 = (time2 / 100) % 100;
    int seconds2 = time2 % 100;
    
    int totalSeconds1 = hours1 * 3600 + minutes1 * 60 + seconds1;
    int totalSeconds2 = hours2 * 3600 + minutes2 * 60 + seconds2;
    int diffSeconds = totalSeconds2 - totalSeconds1;
    diffSeconds = (diffSeconds + 86400) % 86400;
    
    int diffHours = diffSeconds / 3600;
    diffSeconds %= 3600;
    int diffMinutes = diffSeconds / 60;
    diffSeconds %= 60;
   
    std::cout << std::setfill('0') << std::setw(2) << diffHours << ':' 
              << std::setfill('0') << std::setw(2) << diffMinutes << ':' 
              << std::setfill('0') << std::setw(2) << diffSeconds << std::endl;
    
    return 0;
}
