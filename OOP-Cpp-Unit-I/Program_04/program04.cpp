#include <iostream>                  // Header file for input and output operations
using namespace std;                 // Allows us to use cout without std::

int add(int, int);                   // Function declaration (prototype)

int main() {
    int a = 10, b = 20;              // Declares and initializes two integer variables

    cout << "Sum = " << add(a, b) << endl;  // Calls add() function and displays the sum

    return 0;                        // Indicates successful program execution
}

int add(int x, int y) {              // Function definition with two integer parameters
    return x + y;                    // Returns the sum of x and y
}