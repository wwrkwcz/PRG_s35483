#include <iostream>

using namespace std;

int main() {

    char inputChar;

    cout << "Podaj liczbe lub litere lub znak:" << endl;
    cin >> inputChar;
    cout << "Kod ASCII odpowiadjacy " << inputChar << " to " << int(inputChar) << endl;

    return 0;
}