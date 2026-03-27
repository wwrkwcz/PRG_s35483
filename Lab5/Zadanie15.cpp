#include <iostream>

using namespace std;

void rysujTrojkat(int wysokoscTrojkata, char znakRysowania) {
    for (int numerWiersza = 0; numerWiersza < wysokoscTrojkata; numerWiersza++) {

        for (int liczbaSpacji = 0; liczbaSpacji < numerWiersza; liczbaSpacji++) {
            cout << " ";
        }

        for (int licznikZnakow = 0; licznikZnakow < 2 * (wysokoscTrojkata - numerWiersza) - 1; licznikZnakow++) {
            cout << znakRysowania;
        }
        cout << endl;
    }
}

int main() {
    int wyborUzytkownika = 1;

    while (wyborUzytkownika == 1) {
        cout << "Podaj liczbe a: ";
        int wysokoscTrojkata;
        cin >> wysokoscTrojkata;

        cout << "Podaj znak: ";
        char znakRysowania;
        cin >> znakRysowania;

        rysujTrojkat(wysokoscTrojkata, znakRysowania);

        cout << "Chcesz uzyc programu jeszcze raz?" << endl;
        cout << "1 - Tak" << endl;
        cout << "2 - Nie" << endl;
        cout << "Decyzja: ";
        cin >> wyborUzytkownika;

        if (wyborUzytkownika == 1) {
            system("cls");
        }
    }

    return 0;
}
