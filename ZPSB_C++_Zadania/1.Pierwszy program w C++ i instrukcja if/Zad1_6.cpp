/*
6. Łączenie zagadnień
Napisz program, który pobierze dwie liczby od użytkownika, wyświetli ich sumę, a następnie poinformuje użytkownika, czy wynik jest liczbą parzystą czy nieparzystą.

Przykład wyjścia:

Podaj pierwszą liczbę: 10
Podaj drugą liczbę: 15
Suma: 25
Suma jest liczbą nieparzystą.
*/

#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    int suma = a + b;
    std::cout << "Suma: " << suma << std::endl;

    if (suma % 2 == 0) {
        std::cout << "Suma jest liczba parzysta." << std::endl;
    } else {
        std::cout << "Suma jest liczba nieparzysta." << std::endl;
    }

    return 0;
}
