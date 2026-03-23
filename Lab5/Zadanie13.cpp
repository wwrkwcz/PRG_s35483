#include <iostream>
#include <cmath>

using namespace std;

bool czy_jest_doskonala(int sprawdzana_liczba) {
    int suma_dzielnikow = 0;
    int potencjalny_dzielnik = sqrt(sprawdzana_liczba);
    while (potencjalny_dzielnik > 1) {
        if (sprawdzana_liczba % potencjalny_dzielnik == 0) {
            suma_dzielnikow += potencjalny_dzielnik;
            int sparowany_dzielnik = sprawdzana_liczba / potencjalny_dzielnik;
            if (sparowany_dzielnik != potencjalny_dzielnik) {
                suma_dzielnikow += sparowany_dzielnik;
            }
        }
        potencjalny_dzielnik--;
    }
    suma_dzielnikow += 1;
    return suma_dzielnikow == sprawdzana_liczba;
}

int main() {
    int wybor_uzytkownika = 1;
    while (wybor_uzytkownika == 1) {
        cout << "Podaj liczbe: ";
        int sprawdzana_liczba;
        cin >> sprawdzana_liczba;

        if (czy_jest_doskonala(sprawdzana_liczba)) {
            cout << "Jest to liczba doskonala" << endl;
        } else {
            cout << "Nie jest to liczba doskonala" << endl;
        }

        cout << "Chcesz uzyc programu jeszcze raz?" << endl;
        cout << "1 - Tak" << endl;
        cout << "2 - Nie" << endl;
        cout << "Decyzja: ";
        cin >> wybor_uzytkownika;
        system("cls");
    }
    return 0;
}