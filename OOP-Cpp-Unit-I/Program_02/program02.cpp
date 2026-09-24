#include <iostream>                  // Header file for input and output
using namespace std;                 // Allows use of cout without std::

int main() {
    int marks = 45;                  // Declares marks variable and assigns 45

    if (marks >= 40) {               // Checks if marks are greater than or equal to 40
        cout << "Pass";              // Displays "Pass" if the condition is true
    } else {                         // Executes when the if condition is false
        cout << "Fail";              // Displays "Fail" if marks are below 40
    }

    return 0;                        // Indicates successful program execution
}