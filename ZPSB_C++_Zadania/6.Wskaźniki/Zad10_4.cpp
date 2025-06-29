/*
Zadanie 4 - Zgadywanie liczby w tablicy losowej
Napisz program, który operuje na tablicy z 10 wylosowanymi liczbami
całkowitymi z przedziału od 0 do 50, a następnie umożliwia użytkownikowi zgadywanie jednej z tych liczb.
Liczba podana przez użytkownika oraz tablica są przekazywane do funkcji za pomocą wskaźników w celu sprawdzenia,
czy liczba znajduje się w tablicy. Program informuje użytkownika, czy zgadł liczbę, i kontynuuje, aż użytkownik
poda poprawną liczbę. Po zakończeniu zgadywania wyświetlana jest liczba prób.

Wymagania:
Funkcja LosujTablice:
Wypełnia tablicę liczbami losowymi z przedziału od 0 do 50.
Funkcja SprawdzLiczbe:
Przyjmuje wskaźnik do liczby podanej przez użytkownika oraz wskaźnik do tablicy.
Sprawdza, czy liczba znajduje się w tablicy.
Zwraca wynik (true lub false).
W funkcji main:
Należy stworzyć tablicę o 10 elementach, wypełnioną liczbami wygenerowanymi przez funkcję LosujTablice.
Umożliwić użytkownikowi podawanie liczby.
Wykorzystać funkcję SprawdzLiczbe do sprawdzenia, czy liczba znajduje się w tablicy.
Powtarzać pytanie, dopóki użytkownik nie zgadnie liczby.
Wyświetlić informację o liczbie prób.

Kroki do wykonania:

Zdefiniuj tablicę liczb całkowitych o 10 elementach i wypełnij ją liczbami losowymi za pomocą funkcji LosujTablice.
W funkcji main zapytaj użytkownika o liczbę.
Przekaż wskaźnik do liczby użytkownika oraz wskaźnik do tablicy do funkcji SprawdzLiczbe.
Powtarzaj proces, aż użytkownik zgadnie liczbę.
Po zgadnięciu wyświetl liczbę prób.

Wynik działania programu:

Tablica: 20, 27, 26, 44, 29, 50, 14, 11, 24, 14, 
Podaj liczbe: 15
Nie zgadles
Podaj liczbe: 20
Zgadles!
Zgadles za 2 razem.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funkcja wypełniająca tablicę losowymi liczbami z zakresu 0–50
void LosujTablice(int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *(tablica + i) = rand() % 51; // liczby od 0 do 50
    }
}

// Funkcja sprawdzająca, czy liczba znajduje się w tablicy
bool SprawdzLiczbe(int* liczba, int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*(tablica + i) == *liczba)
            return true;
    }
    return false;
}

int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    int liczba, proby = 0;

    srand(time(NULL)); // ziarno dla liczb losowych
    LosujTablice(tablica, ROZMIAR);

    // Wyświetlenie wylosowanej tablicy (dla testu)
    cout << "Tablica: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << ", ";
    }
    cout << endl;

    // Pętla zgadywania
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tablica, ROZMIAR)) {
            cout << "Zgadles!\n";
            cout << "Zgadles za " << proby << " razem." << endl;
            break;
        } else {
            cout << "Nie zgadles\n";
        }

    } while (true);

    return 0;
}
