#include <iostream>
#include <string>

using namespace std;

void displayMessage(string message = "Hello, World", char punctuation = '!') {
    cout << message << punctuation << endl;
}

int main() {
    displayMessage();

    displayMessage("Welcome to default arguments");

    displayMessage("Good morning", '.');

    displayMessage("Hello, World", '?'); 

    return 0;
}