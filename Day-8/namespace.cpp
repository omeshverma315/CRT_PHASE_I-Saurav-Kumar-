#include<iostream>

using namespace std;

namespace Virat{
    void show()
    {
        cout<<"Virat is the best batsman in the world"<<endl;
    }
}

namespace Rohit{
    void show()
    {
        cout<<"Rohit is the best batsman in the world"<<endl;
    }
}

int main()
{
    Virat::show();
    Rohit::show();
    return 0;
}