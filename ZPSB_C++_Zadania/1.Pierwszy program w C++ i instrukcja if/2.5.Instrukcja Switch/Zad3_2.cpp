/*
Zadanie 2 - Kalkulator temperatur
Napisz program, który poprosi użytkownika o wprowadzenie temperatury w stopniach Celsjusza oraz wybór jednostki,
do której ma zostać przeliczona (Kelvin, Fahrenheit). Program powinien dokonać odpowiedniego przeliczenia temperatury
na podstawie wyboru użytkownika. Użyj instrukcji switch do obsługi dwóch opcji: K dla Kelvina i F dla Fahrenheita.
W przypadku podania nieprawidłowej opcji, program powinien wyświetlić odpowiedni komunikat.

Działanie programu:
Program wczytuje temperaturę w stopniach Celsjusza od użytkownika.
Na podstawie wyboru użytkownika (K lub F), program przelicza temperaturę na wybraną jednostkę:
Dla opcji K (Kelvin): temperatura w Kelwinach jest równa temperaturze w Celsjuszach plus 273.15.
Dla opcji F (Fahrenheit): temperatura w Fahrenheitach to wynik działania (Celsjusz * 9/5) + 32.
Jeśli użytkownik wprowadzi inną literę niż K lub F, program wyświetla komunikat o błędzie.

Wynik działania programu:
Podaj temperature w stopniach Celsjusza: 25
Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): F
Temperatura w stopniach Fahrenheita: 77
*/

#include <iostream>

int main() {
    double celsius;
    char jednostka;

    std::cout << "Podaj temperature w stopniach Celsjusza: ";
    std::cin >> celsius;

    std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    std::cin >> jednostka;

    switch (jednostka) {
        case 'K':
        case 'k':
            std::cout << "Temperatura w Kelvinach: " << celsius + 273.15 << std::endl;
            break;
        case 'F':
        case 'f':
            std::cout << "Temperatura w stopniach Fahrenheita: " << (celsius * 9 / 5) + 32 << std::endl;
            break;
        default:
            std::cout << "Blad: nieznana jednostka. Wybierz 'K' lub 'F'." << std::endl;
    }

    return 0;
}
