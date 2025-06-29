/*
Zadanie 1 - Liczby parzyste od 2 do N
Napisz program, który wyświetli wszystkie liczby parzyste od 2 do N, gdzie N będzie podane przez użytkownika. Użyj pętli while, aby wykonać to zadanie.

Poproś użytkownika o podanie liczby całkowitej dodatniej N.
Użyj pętli while, aby sprawdzić i wyświetlić wszystkie liczby parzyste od 2 do N na ekranie.
Po wyświetleniu wszystkich liczb parzystych zakończ działanie programu.

Wynik działania programu:
Podaj liczbe N: 10
Liczby parzyste od 2 do 10: 
2
4
6
8
10
*/


#include <iostream>

int main() {
    int N;

    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    // Sprawdź, czy N jest większe lub równe 2
    if (N < 2) {
        std::cout << "Liczba N musi byc wieksza lub rowna 2." << std::endl;
        return 1; // zakończenie programu z kodem błędu
    }

    std::cout << "Liczby parzyste od 2 do " << N << ":" << std::endl;

    int liczba = 2; // zaczynamy od 2, bo to pierwsza liczba parzysta

    // Pętla while – wykonuje się dopóki liczba nie przekroczy N
    while (liczba <= N) {
        std::cout << liczba << std::endl; 
        liczba += 2; // przejdź do kolejnej liczby parzystej
    }

    return 0;
}
