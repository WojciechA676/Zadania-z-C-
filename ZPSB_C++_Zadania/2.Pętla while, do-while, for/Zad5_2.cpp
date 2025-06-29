/*
Zadanie 2 - Wyświetlanie kwadratów liczb
Napisz program, który obliczy i wyświetli kwadraty kolejnych liczb od 1 do N, gdzie N zostanie podane przez użytkownika. Użyj pętli for, aby wykonać to zadanie.

Poproś użytkownika o podanie liczby całkowitej N.
Użyj pętli for, aby obliczyć i wyświetlić kwadrat każdej liczby od 1 do N.
Po wyświetleniu kwadratów zakończ działanie programu.

Wynik działania programu:

Podaj liczbę N: 5
Kwadraty liczb od 1 do 5:
1^2 = 1
2^2 = 4
3^2 = 9
4^2 = 16
5^2 = 25
*/

#include <iostream>

int main() {
    int N; // Liczba końcowa zakresu

    // Poproś użytkownika o podanie liczby całkowitej
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    // Sprawdzenie poprawności wejścia
    if (N <= 0) {
        std::cout << "Blad: liczba musi byc dodatnia." << std::endl;
        return 1; // zakończ program z kodem błędu
    }

    // Nagłówek dla wyniku
    std::cout << "Kwadraty liczb od 1 do " << N << ":" << std::endl;

    // Pętla for – iteruje od 1 do N i wypisuje kwadrat każdej liczby
    for (int i = 1; i <= N; i++) {
        std::cout << i << "^2 = " << i * i << std::endl; // obliczanie i wypisywanie kwadratu
    }

    return 0;
}

