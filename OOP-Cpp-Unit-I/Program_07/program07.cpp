#include <iostream>                  // Header file for input and output
using namespace std;                 // Allows use of cout without std::

class Student {                      // Defines a class named Student
public:
    static int count;                // Declares a static variable shared by all objects

    Student() {                      // Constructor of the Student class
        count++;                     // Increases count whenever an object is created
    }
};

int Student::count = 0;              // Initializes the static variable to 0

int main() {
    Student s1, s2, s3;              // Creates 3 objects, so constructor runs 3 times

    cout << Student::count;          // Displays the total number of objects created

    return 0;                        // Indicates successful program execution
}