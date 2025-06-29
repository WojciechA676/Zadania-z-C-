/*
5. Operatory
Stwórz program, który wczyta dwie liczby całkowite od użytkownika i wykona na nich następujące operacje: dodawanie, odejmowanie, mnożenie, dzielenie oraz resztę z dzielenia. Utrwalenie wiedzy na temat operatorów arytmetycznych oraz pracy z liczbami.

Przykład wyjścia:

Podaj pierwszą liczbę: 8
Podaj drugą liczbę: 3
Suma: 11
Różnica: 5
Iloczyn: 24
Iloraz: 2
Reszta z dzielenia: 2
*/

#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    std::cout << "Suma: " << a + b << std::endl;
    std::cout << "Roznica: " << a - b << std::endl;
    std::cout << "Iloczyn: " << a * b << std::endl;

    if (b != 0) {
        std::cout << "Iloraz: " << a / b << std::endl;
        std::cout << "Reszta z dzielenia: " << a % b << std::endl;
    } else {
        std::cout << "Nie mozna dzielic przez zero!" << std::endl;
    }

    return 0;
}
