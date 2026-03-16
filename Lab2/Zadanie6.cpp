#include <iostream>

using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe:" << endl;
    cin >> liczba;

    if (liczba % 3 == 0) {
        if (liczba % 5 == 0) {
            cout << "PlingPlang" << endl;
        } else {
            cout << "Pling" << endl;
        }
    } else if (liczba % 5 == 0) {
        cout << "Plang" << endl;
    } else if (liczba % 7 == 0) {
        cout << "Plong" << endl;
    } else {
        cout << liczba << endl;
    }

    return 0;
}