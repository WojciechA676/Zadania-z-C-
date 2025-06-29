/*
Zadanie 1 - Sumowanie liczb od 1 do N
Napisz program, który obliczy sumę wszystkich liczb od 1 do N, gdzie N zostanie podane przez użytkownika. Użyj pętli for, aby wykonać to zadanie.

Poproś użytkownika o podanie liczby całkowitej dodatniej N.
Użyj pętli for, aby dodać wszystkie liczby od 1 do N i wyświetlić wynik sumy na ekranie.
Po wyświetleniu wyniku zakończ działanie programu.

Wynik działania programu:
Podaj liczbę N: 5
Suma liczb od 1 do 5 wynosi: 15
*/


#include <iostream>

int main() {
    int N;         // Liczba końcowa zakresu
    int suma = 0;  // Zmienna do przechowywania sumy

    // Poproś użytkownika o podanie liczby całkowitej dodatniej
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    // Sprawdzenie poprawności wejścia
    if (N <= 0) {
        std::cout << "Blad: liczba musi byc dodatnia." << std::endl;
        return 1; // zakończ program z błędem
    }

    // Pętla for – dodaje kolejne liczby od 1 do N
    for (int i = 1; i <= N; i++) {
        suma += i; // dodaj bieżącą liczbę do sumy
    }

    // Wyświetlenie wyniku
    std::cout << "Suma liczb od 1 do " << N << " wynosi: " << suma << std::endl;

    return 0;
}
