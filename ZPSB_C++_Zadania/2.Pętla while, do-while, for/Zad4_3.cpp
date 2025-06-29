/*
Zadanie 3 - Wprowadzanie i wyświetlanie liczb
Napisz program, który wczyta liczby od użytkownika, aż ten zdecyduje się zakończyć wprowadzanie. Użyj pętli do-while, aby wykonać to zadanie.

Zainicjuj zmienną do przechowywania liczby.
W pętli do-while:
Poproś użytkownika o podanie liczby.
Wyświetl wprowadzone liczby na ekranie.
Zapytaj użytkownika, czy chce kontynuować (np. 'Czy chcesz wprowadzić kolejną liczbę? (t/n)').
Kontynuuj pętlę, jeśli użytkownik wybierze 't', a zakończ, jeśli wybierze 'n'.

Wynik działania programu:
Podaj liczbe: 2
Wprowadziles liczbe: 2
Czy chcesz wprowadzic kolejna liczbe? (t/n): t
Podaj liczbe: 5
Wprowadziles liczbe: 5
Czy chcesz wprowadzic kolejna liczbe? (t/n): n
Dziekuje za wprowadzenie liczb!
*/

#include <iostream>

int main() {
    int liczba;          // zmienna do przechowywania liczby
    char kontynuuj;      // zmienna do przechowywania odpowiedzi użytkownika

    // Pętla do-while wykonuje się co najmniej raz
    do {
        // Wczytaj liczbę od użytkownika
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        // Wyświetl wprowadzoną liczbę
        std::cout << "Wprowadziles liczbe: " << liczba << std::endl;

        // Zapytaj, czy użytkownik chce kontynuować
        std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        std::cin >> kontynuuj;

    } while (kontynuuj == 't' || kontynuuj == 'T'); // kontynuuj tylko jeśli użytkownik poda 't' lub 'T'

    // Po zakończeniu pętli wyświetl wiadomość końcową
    std::cout << "Dziekuje za wprowadzenie liczb!" << std::endl;

    return 0;
}
