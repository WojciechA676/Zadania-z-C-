/*
2. Kalkulator BMI
Napisz program, który oblicza wskaźnik masy ciała (BMI) na podstawie wprowadzonych przez użytkownika danych: masy ciała w kilogramach i wzrostu w metrach. Program powinien następnie wyświetlić interpretację wyniku BMI na podstawie poniższych kategorii:

BMI poniżej 18.5: Niedowaga

BMI od 18.5 do 24.9: W normie

BMI od 25 do 29.9: Nadwaga

BMI powyżej 30: Otyłość

Wskazówki:

Skorzystaj z instrukcji warunkowej if-else do porównania wartości BMI z przedziałami i ustalenia odpowiedniej kategorii.

Wagę podajemy w kg a wzrost w metrach.

Do obliczenia BMI użyj wzoru: BMI = masa_ciała / (wzrost * wzrost).

Wynik działania programu:

Podaj wage (w kg): 70
Podaj wzrost (w metrach): 1.75

Twoje BMI wynosi: 22.8571
Twoj stan wagowy: W normie
*/



#include <iostream>

int main() {
    float waga, wzrost;

    std::cout << "Podaj wage (w kg): ";
    std::cin >> waga;

    std::cout << "Podaj wzrost (w metrach): ";
    std::cin >> wzrost;

    if (waga <= 0 || wzrost <= 0) {
        std::cout << "Blad: Waga i wzrost musza byc wieksze od zera." << std::endl;
        return 1;
    }

    float bmi = waga / (wzrost * wzrost);

    std::cout << "Twoje BMI wynosi: " << bmi << std::endl;
    std::cout << "Twoj stan wagowy: ";

    if (bmi < 18.5) {
        std::cout << "Niedowaga";
    } else if (bmi < 25.0) {
        std::cout << "W normie";
    } else if (bmi < 30.0) {
        std::cout << "Nadwaga";
    } else {
        std::cout << "Otylosc";
    }

    std::cout << std::endl;

    return 0;
}


