#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello, World!\n";
    string userName;
    cout << "Please enter your first name: ";
    cin >> userName;
    cout << "\nHello, " << userName << " ... and goodbye!\n";
    return 0;
}