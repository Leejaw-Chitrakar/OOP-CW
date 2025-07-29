// get => cin.get()
// getline => cin.getline[array,var]
// put => cout.put(var)

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    cout << "Example of getch() function" << endl;
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Entered character is: ";
    cout.put(ch);
    cin.ignore(); // igonre the newline character left in the input buffer
    cout << endl;

    cout << "Example of getline() function " << endl;
    char c[10];
    cout << "Enter a string: ";
    cin.getline(c,10);
    cout << "Entered string is: "; 
    for(int i=0;c[i]!='\0';i++){
        cout.put(c[i]);
    }
    cout <<endl;
    
    return 0;
}