/*
3. Sprawdzanie parzystości i podzielności przez 3
Napisz program, który wczytuje od użytkownika liczbę całkowitą i sprawdza, czy jest ona parzysta oraz czy jest podzielna przez 3. Program powinien wyświetlić odpowiedni komunikat w zależności od wyników sprawdzenia.

Wskazówki:

Wykorzystaj instrukcje warunkowe if do sprawdzenia parzystości i podzielności przez 3.

Możesz użyć operatorów % (modulo) do sprawdzenia reszty z dzielenia przez 2 (czy liczba jest parzysta) i 3 (czy liczba jest podzielna przez 3).

Wynik działania programu:

Podaj liczbe calkowita: 12

Liczba 12 jest parzysta.
Liczba 12 jest podzielna przez 3.
*/


#include <iostream>

int main() {
    int liczba;

    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    if (liczba % 2 == 0) {
        std::cout << "Liczba " << liczba << " jest parzysta." << std::endl;
    } else {
        std::cout << "Liczba " << liczba << " jest nieparzysta." << std::endl;
    }

    if (liczba % 3 == 0) {
        std::cout << "Liczba " << liczba << " jest podzielna przez 3." << std::endl;
    } else {
        std::cout << "Liczba " << liczba << " nie jest podzielna przez 3." << std::endl;
    }

    return 0;
}
