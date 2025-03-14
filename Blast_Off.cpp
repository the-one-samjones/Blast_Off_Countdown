#include <iostream>
using namespace std;

int numInput;           //Initializes a variable to hold the user input

int main() {
    cout << "Enter a number to count down from: ";  //Prompt the user for input
    cin >> numInput;                         //Store the input in numInput
    cout << endl;                         //Print a new line

    for (int i = numInput; i > 0; --i) {              //Loop from numInput down to 1
        cout << i;              //Print the current number
        cout << endl;       //Print a new line  
    }
    cout << "Blast Off!" << endl;          //Print "Blast Off!" after the countdown 

    return 0;
}