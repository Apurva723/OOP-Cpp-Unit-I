#include <iostream>                  // Header file for input and output
using namespace std;                 // Allows use of cout without std::

class Demo {                         // Defines a class named Demo
public:

    Demo() {                         // Constructor of the Demo class
        cout << "Constructor called\n";  // Displays message when constructor is called
    }

    ~Demo() {                        // Destructor of the Demo class
        cout << "Destructor called\n";   // Displays message when destructor is called
    }
};

int main() {
    Demo d;                          // Creates an object of Demo class
                                      // Constructor is called automatically

    return 0;                        // End of program
                                      // Destructor is called automatically
}