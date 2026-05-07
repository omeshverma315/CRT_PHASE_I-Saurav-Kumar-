#include <iostream>
using namespace std;

// Base Class
class Player
{
public:
    string name;
    int age;

    void setName(string n)
    {
        name = n;
    }
};

// Derived Class 1
class Cricketer : public Player
{
public:
    int runs;

    void setRuns(int r)
    {
        runs = r;
    }

    void showCricketer()
    {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

// Derived Class 2
class Footballer : public Player
{
public:
    int goals;

    void setGoals(int g)
    {
        goals = g;
    }

    void showFootballer()
    {
        cout << "Footballer Name: " << name << endl;
        cout << "Goals: " << goals << endl;
    }
};

int main()
{
    Cricketer c1;
    c1.setName("Virat");
    c1.setRuns(12000);
    Footballer f1;
    f1.setName("Messi");
    f1.setGoals(850);

    cout << "Cricketer Details " << endl;
    c1.showCricketer();
    cout << "Footballer Details" << endl;
    f1.showFootballer();

    return 0;
}