#include<iostream>
using namespace std;    
class Student {
    public:
    string name;
    int rollno; 

    Student() {
        name = "Omesh";
        rollno = 22;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Default contructor is called"<< endl;
    }
};
int main() {
    Student s1;
    s1.show();
    return 0;
}