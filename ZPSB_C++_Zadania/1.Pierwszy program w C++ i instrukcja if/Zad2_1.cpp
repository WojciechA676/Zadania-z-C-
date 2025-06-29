/*
1. Kalkulator ocen
Napisz program, który pobiera od użytkownika wynik egzaminu (liczbę punktów) i przypisuje odpowiednią ocenę na podstawie poniższej skali:

0-49 punktów: Ocena niedostateczna

50-69 punktów: Ocena dostateczna

70-84 punktów: Ocena dobra

85-99 punktów: Ocena bardzo dobra

100 punktów: Ocena celująca

Program powinien również sprawdzać poprawność wprowadzonych danych, informując użytkownika, gdy wprowadzi on punkty spoza zakresu od 0 do 100.

Wynik działania programu:

Podaj wynik egzaminu (liczba punktow): 78
Ocena: Dobra
*/


#include <iostream>

int main() {
    int punkty;

    std::cout << "Podaj wynik egzaminu (liczba punktow): ";
    std::cin >> punkty;

    if (punkty < 0 || punkty > 100) {
        std::cout << "Błąd: liczba punktów musi być w zakresie od 0 do 100." << std::endl;
    } else {
        std::cout << "Ocena: ";
        if (punkty <= 49) {
            std::cout << "Niedostateczna";
        } else if (punkty <= 69) {
            std::cout << "Dostateczna";
        } else if (punkty <= 84) {
            std::cout << "Dobra";
        } else if (punkty <= 99) {
            std::cout << "Bardzo dobra";
        } else { // punkty == 100
            std::cout << "Celująca";
        }
        std::cout << std::endl;
    }

    return 0;
}
