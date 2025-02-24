// File: pracExam1q2.cpp
// Name: Brysen Landis

#include <iostream>
int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    
    int col1, col2, col3;
    int found = -1;
    int diff1, diff2, diff3;
    
    // Check digit 0
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 81818;  // 818 18
        col3 = 81888;  // 818 88
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 0;
        }
    }
    
    // Check digit 1
    if (found == -1) {
        col1 = 11818;  // 118 18
        col2 = 11818;  // 118 18
        col3 = 81818;  // 818 18
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 1;
        }
    }
    
    // Check digit 2
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 11818;  // 118 18
        col3 = 88888;  // 888 88
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 2;
        }
    }
    
    // Check digit 3
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 11818;  // 118 18
        col3 = 88888;  // 888 88
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 3;
        }
    }
    
    // Check digit 4
    if (found == -1) {
        col1 = 81818;  // 818 18
        col2 = 81818;  // 818 18
        col3 = 88118;  // 881 18
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 4;
        }
    }
    
    // Check digit 5
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 81818;  // 818 18
        col3 = 81888;  // 818 88
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 5;
        }
    }
    
    // Check digit 6
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 81818;  // 818 18
        col3 = 88888;  // 888 88
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 6;
        }
    }
    
    // Check digit 7
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 11818;  // 118 18
        col3 = 11118;  // 111 18
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 7;
        }
    }
    
    // Check digit 8
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 81818;  // 818 18
        col3 = 88888;  // 888 88
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 8;
        }
    }
    
    // Check digit 9
    if (found == -1) {
        col1 = 88818;  // 888 18
        col2 = 81818;  // 818 18
        col3 = 88118;  // 881 18
        diff1 = num1 - col1;
        diff2 = num2 - col2;
        diff3 = num3 - col3;
        if (diff1 >= -3 && diff1 <= 3 && diff2 >= -3 && diff2 <= 3 && diff3 >= -3 && diff3 <= 3) {
            found = 9;
        }
    }
    
    std::cout << found << std::endl;
    return 0;
}
