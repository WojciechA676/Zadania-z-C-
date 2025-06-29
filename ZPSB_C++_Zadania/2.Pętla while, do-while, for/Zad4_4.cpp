/*
Zadanie 4 - Liczenie liczb parzystych
Napisz program, który policzy, ile liczb parzystych znajduje się w zakresie od 1 do N, gdzie N będzie liczbą podaną przez użytkownika. Użyj pętli do-while, aby wykonać to zadanie.

Poproś użytkownika o podanie liczby całkowitej dodatniej N.
Zainicjuj zmienną przechowującą licznik parzystych na 0 oraz zmienną pomocniczą do iteracji, rozpoczynając od 1.
Użyj pętli do-while, aby sprawdzać każdą liczbę w zakresie od 1 do N:
Jeśli liczba jest parzysta, zwiększ licznik parzystych o 1.
Po zakończeniu pętli wyświetl liczbę liczb parzystych na ekranie.

Wynik działania programu:
Podaj liczbe calkowita dodatnia N: 10
Liczba liczb parzystych od 1 do 10 wynosi: 5
*/

#include <iostream>

int main() {
    int N;                      // Liczba końcowa zakresu
    int licznikParzystych = 0; // Liczba znalezionych liczb parzystych
    int i = 1;                  // Zmienna iteracyjna

    // Poproś użytkownika o podanie liczby dodatniej
    std::cout << "Podaj liczbe calkowita dodatnia N: ";
    std::cin >> N;

    // Sprawdzenie poprawności wejścia
    if (N <= 0) {
        std::cout << "Blad: liczba musi byc dodatnia." << std::endl;
        return 1; // zakończ program z błędem
    }

    // Pętla do-while – sprawdzanie każdej liczby od 1 do N
    do {
        if (i % 2 == 0) {
            licznikParzystych++; // jeśli liczba jest parzysta, zwiększ licznik
        }
        i++; // przejdź do kolejnej liczby
    } while (i <= N);

    // Wyświetl wynik
    std::cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznikParzystych << std::endl;

    return 0;
}
