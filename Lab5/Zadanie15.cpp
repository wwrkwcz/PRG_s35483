#include <iostream>

using namespace std;

void rysuj_trojkat(int wysokosc_trojkata, char znak_rysowania) {
    for (int numer_wiersza = 0; numer_wiersza < wysokosc_trojkata; numer_wiersza++) {
        for (int liczba_spacji = 0; liczba_spacji < numer_wiersza; liczba_spacji++) {
            cout << " ";
        }
        for (int licznik_znakow = 0; licznik_znakow < 2 * (wysokosc_trojkata - numer_wiersza) - 1; licznik_znakow++) {
            cout << znak_rysowania;
        }
        cout << endl;
    }
}

int main() {
    int wybor_uzytkownika = 1;
    while (wybor_uzytkownika == 1) {
        cout << "Podaj liczbe a: ";
        int wysokosc_trojkata;
        cin >> wysokosc_trojkata;
        cout << "Podaj znak: ";
        char znak_rysowania;
        cin >> znak_rysowania;

        rysuj_trojkat(wysokosc_trojkata, znak_rysowania);

        cout << "Chcesz uzyc programu jeszcze raz?" << endl;
        cout << "1 - Tak" << endl;
        cout << "2 - Nie" << endl;
        cout << "Decyzja: ";
        cin >> wybor_uzytkownika;
        if (wybor_uzytkownika == 1)
            system("cls");
    }
    return 0;
}