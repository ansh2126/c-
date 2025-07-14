#include <iostream>
using namespace std;

int main() {
    int n;
    string word;
    cout << "Enter a word and how many times to print: ";
    cin >> word >> n;

    for(int i = 0; i < n; i++) {
        cout << word << endl;
    }
    return 0;
}