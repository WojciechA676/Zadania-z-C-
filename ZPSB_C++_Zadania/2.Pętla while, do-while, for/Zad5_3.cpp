/*
Zadanie 3 - Liczby nieparzyste od 1 do N
Napisz program, który wyświetli wszystkie liczby nieparzyste od 1 do N, gdzie N zostanie podane przez użytkownika. Użyj pętli for, aby wykonać to zadanie.

Poproś użytkownika o podanie liczby całkowitej N.
Użyj pętli for, aby sprawdzić i wyświetlić wszystkie liczby nieparzyste od 1 do N na ekranie.
Po wyświetleniu wszystkich liczb nieparzystych zakończ działanie programu.
Wskazówka:
Aby rozwiązać to zadanie, możesz użyć pętli for, która będzie iterować od 1 do N. W każdej iteracji sprawdzisz, czy liczba jest nieparzysta. Jeśli jest nieparzysta, wypiszesz ją na ekranie.

Wynik działania programu:
Podaj liczbę N: 10
Liczby nieparzyste od 1 do 10:
1
3
5
7
9
*/

#include <iostream>

int main() {
    int N; // Liczba końcowa zakresu

    // Poproś użytkownika o podanie liczby całkowitej
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    // Sprawdzenie poprawności danych
    if (N < 1) {
        std::cout << "Blad: liczba musi byc wieksza lub rowna 1." << std::endl;
        return 1; // zakończenie programu z błędem
    }

    // Nagłówek wyniku
    std::cout << "Liczby nieparzyste od 1 do " << N << ":" << std::endl;

    // Pętla for – przechodzimy przez wszystkie liczby od 1 do N
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) { // Sprawdzenie, czy liczba jest nieparzysta
            std::cout << i << std::endl; // Wyświetlenie liczby nieparzystej
        }
    }

    return 0;
}

