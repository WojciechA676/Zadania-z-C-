/*
Zadanie 1 - Sprawdzenie, czy liczba jest parzysta lub nieparzysta
Napisz program, który sprawdzi, czy podana przez użytkownika liczba jest parzysta, czy nieparzysta. Program powinien wykorzystać funkcję, która przyjmie liczbę jako argument i zwróci informację, czy liczba jest parzysta. Następnie program wyświetli odpowiedni komunikat.

Kroki do wykonania:
Program wczytuje liczbę całkowitą od użytkownika.
Funkcja sprawdza, czy liczba jest parzysta, czy nieparzysta.
Funkcja zwraca wartość logiczną (true dla liczby parzystej, false dla liczby nieparzystej).
Program wyświetla odpowiedni komunikat na podstawie wyniku funkcji.

Wynik działania programu:
Podaj liczbe calkowita: 4
Liczba 4 jest parzysta.
*/

#include <iostream>

// Funkcja sprawdzająca, czy liczba jest parzysta
bool czyParzysta(int liczba) {
    return (liczba % 2 == 0); // Zwraca true, jeśli reszta z dzielenia przez 2 to 0
}

int main() {
    int liczba;

    // Wczytaj liczbę od użytkownika
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    // Użycie funkcji i wyświetlenie komunikatu
    if (czyParzysta(liczba)) {
        std::cout << "Liczba " << liczba << " jest parzysta." << std::endl;
    } else {
        std::cout << "Liczba " << liczba << " jest nieparzysta." << std::endl;
    }

    return 0;
}
