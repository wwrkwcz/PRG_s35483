#include <iostream>

using namespace std;

bool czy_jest_pierwsza(int sprawdzana_liczba) {
    if (sprawdzana_liczba <= 1) return false;
    for (int potencjalny_dzielnik = 2; potencjalny_dzielnik * potencjalny_dzielnik <= sprawdzana_liczba; potencjalny_dzielnik++) {
        if (sprawdzana_liczba % potencjalny_dzielnik == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int wybor_uzytkownika = 1;
    while (wybor_uzytkownika == 1) {
        cout << "Podaj liczbe n: ";
        int gorna_granica;
        cin >> gorna_granica;

        cout << "Liczby pierwsze z przedzialu <2," << gorna_granica << "> to: ";
        for (int kandydat_na_pierwsza = 2; kandydat_na_pierwsza <= gorna_granica; kandydat_na_pierwsza++) {
            if (czy_jest_pierwsza(kandydat_na_pierwsza)) {
                cout << kandydat_na_pierwsza << " ";
            }
        }
        cout << endl;

        cout << "Chcesz uzyc programu jeszcze raz?" << endl;
        cout << "1 - Tak" << endl;
        cout << "2 - Nie" << endl;
        cout << "Decyzja: ";
        cin >> wybor_uzytkownika;
        system("cls");
    }
    return 0;
}