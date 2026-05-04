#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int r = 1; r <= n; r++) {

        // spaces
        for (int s = 1; s <= n - r; s++) {
            cout << " ";
        }
        // stars
        for (int a = 1; a <= r; a++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}