#include <iostream>
using namespace std;

int main() {
    int value = 10;
    int* ptr = &value;

    cout << "Address: " << ptr << endl;   // address
    cout << "Value: " << *ptr << endl;    // value

    *ptr = 20;   // change value using pointer

    cout << "Value: " << *ptr << endl;  
    cout << "Value: " << ptr << endl;    

    return 0;
}