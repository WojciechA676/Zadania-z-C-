/*
Zadanie 3 - Kalkulator opłat za parkowanie
Napisz program, który poprosi użytkownika o wprowadzenie liczby godzin parkowania oraz rodzaju pojazdu.
Program powinien wyliczyć opłatę za parkowanie na podstawie liczby godzin i rodzaju pojazdu. Użyj instrukcji switch,
aby obsłużyć trzy rodzaje pojazdów: samochód osobowy (S), motocykl (M) oraz autobus (A). Opłaty za parkowanie są naliczane w następujący sposób:

Samochód osobowy: 5 zł za każdą godzinę.
Motocykl: 3 zł za każdą godzinę.
Autobus: 10 zł za każdą godzinę.

Działanie programu:
Program wczytuje liczbę godzin parkowania oraz typ pojazdu od użytkownika.
Na podstawie wprowadzonego typu pojazdu, program wylicza całkowitą opłatę za parkowanie:
Samochód osobowy (S): 5 zł za każdą godzinę.
Motocykl (M): 3 zł za każdą godzinę.
Autobus (A): 10 zł za każdą godzinę.
W przypadku wprowadzenia nieznanego typu pojazdu, program powinien wyświetlić odpowiedni komunikat.

Wynik działania programu:
Podaj liczbe godzin parkowania: 4
Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): S
Oplata za parkowanie: 20 zl
*/

#include <iostream>

int main() {
    int godziny;
    char typPojazdu;
    int oplata = 0; // zmienna do przechowywania obliczonej opłaty

    // Wczytanie liczby godzin parkowania
    std::cout << "Podaj liczbe godzin parkowania: ";
    std::cin >> godziny;

    // Wczytanie typu pojazdu
    std::cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    std::cin >> typPojazdu;

    // Sprawdzenie typu pojazdu i obliczenie opłaty
    switch (typPojazdu) {
        case 'S': // Samochód osobowy
        case 's':
            oplata = godziny * 5; // 5 zł za godzinę
            break;
        case 'M': // Motocykl
        case 'm':
            oplata = godziny * 3; // 3 zł za godzinę
            break;
        case 'A': // Autobus
        case 'a':
            oplata = godziny * 10; // 10 zł za godzinę
            break;
        default:
            // Obsługa nieznanego typu pojazdu
            std::cout << "Blad: nieznany typ pojazdu!" << std::endl;
            return 1; // Zakończenie programu z błędem
    }

    // Wyświetlenie wyniku opłaty
    std::cout << "Oplata za parkowanie: " << oplata << " zl" << std::endl;

    return 0;
}

