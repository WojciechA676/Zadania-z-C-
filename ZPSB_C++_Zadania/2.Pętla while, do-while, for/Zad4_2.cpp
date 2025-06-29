/*
Zadanie 2 - Suma liczb naturalnych do N
Napisz program, który obliczy sumę wszystkich liczb naturalnych od 1 do N, gdzie N będzie liczbą podaną przez użytkownika. Użyj pętli while, aby wykonać to zadanie.

Poproś użytkownika o podanie liczby całkowitej dodatniej N.
Zainicjuj zmienną przechowującą sumę na 0.
Użyj pętli while, aby dodawać kolejne liczby naturalne do sumy.
Po osiągnięciu liczby N wyświetl sumę na ekranie.

Wynik działania programu:
Podaj liczbe N: 5
Suma liczb naturalnych do 5: 15
*/

#include <iostream>

int main() {
    int N;

    // Poproś użytkownika o podanie liczby całkowitej dodatniej
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    // Sprawdź, czy N jest dodatnie
    if (N <= 0) {
        std::cout << "Liczba N musi byc dodatnia." << std::endl;
        return 1; // zakończenie programu z błędem
    }

    int suma = 0;       // zmienna do przechowywania sumy
    int licznik = 1;    // licznik od 1 do N

    // Pętla while dodaje kolejne liczby do sumy
    while (licznik <= N) {
        suma += licznik;    // dodaj bieżącą liczbę do sumy
        licznik++;          // przejdź do kolejnej liczby
    }

    // Wyświetl wynik
    std::cout << "Suma liczb naturalnych do " << N << ": " << suma << std::endl;

    return 0;
}
