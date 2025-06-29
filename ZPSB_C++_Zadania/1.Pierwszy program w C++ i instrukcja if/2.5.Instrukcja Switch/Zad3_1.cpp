/*
Zadanie 1 - kalkulator
Napisz program, który wczyta od użytkownika dwie liczby całkowite oraz znak działania (+, -, *, /). Program powinien wykonać odpowiednie działanie matematyczne na podanych liczbach w zależności od wprowadzonego znaku działania. W przypadku podania nieznanego znaku, program powinien wyświetlić odpowiedni komunikat o błędzie.

Kroki do wykonania:

Program wczytuje dwie liczby całkowite oraz znak działania matematycznego od użytkownika.

Na podstawie wprowadzonego znaku działania program wykonuje odpowiednią operację (dodawanie, odejmowanie, mnożenie, dzielenie).

Jeśli zostanie podany nieznany znak działania, program wyświetla komunikat o błędzie.

Po poprawnym wprowadzeniu wartości oblicza wynik i wyświetla go.

Wynik działania programu:

Podaj pierwsza liczbe: 8
Podaj druga liczbe: 2
Podaj znak dzialania (+, -, *, /): *
Wynik: 16
*/

#include <iostream>

int main() {
    int a, b;
    char dzialanie;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    std::cout << "Podaj znak dzialania (+, -, *, /): ";
    std::cin >> dzialanie;

    switch (dzialanie) {
        case '+':
            std::cout << "Wynik: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Wynik: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Wynik: " << a * b << std::endl;
            break;
        case '/':
            if (b != 0) {
                std::cout << "Wynik: " << a / b << std::endl;
            } else {
                std::cout << "Blad: nie mozna dzielic przez zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Blad: nieznany znak dzialania!" << std::endl;
    }

    return 0;
}
