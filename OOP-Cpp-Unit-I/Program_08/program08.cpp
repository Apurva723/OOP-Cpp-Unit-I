#include <iostream>                  // Header file for input and output
using namespace std;                 // Allows use of cout without std::

class Test {                         // Defines a class named Test
private:
    int value;                       // Private variable to store a value

public:
    Test(int v) {                    // Constructor with one parameter
        value = v;                   // Assigns the parameter value to value
    }

    inline int getValue() {          // Inline function to return the value
        return value;                // Returns the private variable value
    }

    friend void show(Test t);        // Declares show() as a friend function
};

void show(Test t) {                  // Defines the friend function
    cout << t.value;                 // Accesses the private value using friend function
}

int main() {
    Test obj(50);                    // Creates an object and passes 50 to the constructor

    cout << obj.getValue() << endl;  // Calls getValue() and displays the value

    show(obj);                       // Calls the friend function to display the value

    return 0;                        // Indicates successful program execution
}