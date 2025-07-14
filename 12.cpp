#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;
    cout << "Enter total units consumed: ";
    cin >> units;

    if(units <= 100)
        bill = units * 0.6;
    else if(units <= 300)
        bill = (100 * 0.6) + ((units - 100) * 0.8);
    else
        bill = (100 * 0.6) + (200 * 0.8) + ((units - 300) * 0.9);

    if(bill > 300)
        bill += 50;

    cout << "Total bill = Rs. " << bill << endl;
    return 0;
}