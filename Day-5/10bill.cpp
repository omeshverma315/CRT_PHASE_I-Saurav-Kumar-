//write a funtion that apply 10% discount using references and print the updated bill amount.
#include <iostream>
using namespace std;
void applyDiscount(double &billAmount) {
    billAmount = billAmount - (billAmount * 0.10); 
}
int main() {
    double billAmount;

    cout << "Enter the bill amount: ";
    cin >> billAmount;

    applyDiscount(billAmount); 
    cout << "Updated bill amount after 10% discount: " << billAmount;

    return 0;
}