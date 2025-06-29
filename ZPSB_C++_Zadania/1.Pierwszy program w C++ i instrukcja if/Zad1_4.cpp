/*
4. Strumienie wejścia i wyjścia
Napisz program, który pobierze od użytkownika jego imię i wiek, a następnie wyświetli wiadomość powitalną.

Przykład wyjścia:

Podaj swoje imię: Jan
Podaj swój wiek: 25
Witaj, Jan! Masz 25 lat.
*/

#include <iostream>
#include <string>

int main() {
    std::string imie;
    int wiek;

    std::cout << "Podaj swoje imie: ";
    std::cin >> imie;

    std::cout << "Podaj swoj wiek: ";
    std::cin >> wiek;

    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << std::endl;

    return 0;
}
