#include <iostream>
using namespace std;

void displayMessage(string message = "Greetings from Darjeeling", char punctuation = '!') {
    cout << message << punctuation << endl;
}

int main() {
    displayMessage();

    displayMessage("Coding is fun"); 

    displayMessage("Have a great day", '!');

    return 0;
}