#include <iostream>
using namespace std;

int numInput;

int main() {
    cout << "Enter a number to count down from: ";
    cin >> numInput;
    cout << endl;

    for (int i = numInput; i > 0; --i) {
        cout << i;
        cout << endl;
    }
    cout << "Blast Off!" << endl;

    return 0;
}