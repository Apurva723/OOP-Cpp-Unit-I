#include <iostream>                  // Header file for input and output
using namespace std;                 // Allows use of cout without std::

class Student {                      // Defines a class named Student
public:
    string name;                     // Declares a string variable to store student name
    int age;                         // Declares an integer variable to store student age

    void show() {                    // Defines a function to display student details
        cout << name << " " << age << endl;  // Displays name and age
    }
};

int main() {
    Student s1;                      // Creates an object s1 of Student class

    s1.name = "Amit";                // Assigns "Amit" to the name variable
    s1.age = 20;                     // Assigns 20 to the age variable

    s1.show();                       // Calls show() function to display student details

    return 0;                        // Indicates successful program execution
}