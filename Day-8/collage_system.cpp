#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;

public:
    // Function to input common details
    void getPersonData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    // Virtual Function
    virtual void displayRole()
    {
        cout << "This person belongs to college." << endl;
    }

    // Virtual Destructor
    virtual ~Person() {}
};

// Derived Class : Student
class Student : public Person
{
private:
    int rollNo;
    string course;

public:
    void getStudentData()
    {
        getPersonData();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Course: ";
        cin >> course;
    }

    // Overriding Virtual Function
    void displayRole() override
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Course    : " << course << endl;
        cout << "Category  : Student" << endl;
    }
};

// Derived Class : Teacher
class Teacher : public Person
{
private:
    int teacherID;
    string subject;

public:
    void getTeacherData()
    {
        getPersonData();

        cout << "Enter Teacher ID: ";
        cin >> teacherID;

        cout << "Enter Subject: ";
        cin >> subject;
    }

    // Overriding Virtual Function
    void displayRole() override
    {
        cout << "\n--- Teacher Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Teacher ID : " << teacherID << endl;
        cout << "Subject    : " << subject << endl;
        cout << "Category   : Teacher" << endl;
    }
};

// Main Function
int main()
{
    // Student Object
    Student s;
    s.getStudentData();

    // Teacher Object
    Teacher t;
    t.getTeacherData();

    // Base Class Pointer
    Person *p;

    // Pointing to Student
    p = &s;
    p->displayRole();

    // Pointing to Teacher
    p = &t;
    p->displayRole();

    return 0;
}