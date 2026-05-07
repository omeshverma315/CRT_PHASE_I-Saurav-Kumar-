#include<iostream>
using namespace std;
class Cricketers
{public:
    string name;
    int runs;

    Cricketers(string n, int r)
    {
        this->name = n;
        this->runs = r;
    }
    Cricketers(const Cricketers &c)
    {
        this->name = c.name;
        this->runs = c.runs;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};
    int main()
    {
        Cricketers c1("Sachin", 10000);
        c1.show();
        Cricketers c2(c1);
        c2.show();  
        return 0;
    }
