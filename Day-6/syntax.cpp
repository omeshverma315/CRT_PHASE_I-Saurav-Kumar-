#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Function to take input
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display data
    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Main function
int main() {
    Student s1;   // Object creation

    s1.input();   // Calling input function
    s1.display(); // Calling display function

    return 0;
}