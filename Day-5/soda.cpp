#include <iostream>
using namespace std;

int totalSoda(int sodas) {
    return sodas * 30;   
}

int main() {
    int n;
    cout << "Enter number of sodas: ";
    cin >> n;

    cout << "Total soda = " << totalSoda(n) << " ml";

    return 0;
}