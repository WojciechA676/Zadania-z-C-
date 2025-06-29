/*
Zadanie 3 - Obliczanie potęgi liczby za pomocą rekurencji
Napisz program, który oblicza wartość potęgi liczby. Użytkownik podaje
liczbę podstawową oraz wykładnik, a program oblicza wynik, stosując rekurencję.
W przypadku rekurencyjnego podejścia funkcja wywołuje samą siebie, zmniejszając 
wykładnik aż do osiągnięcia warunku końca, czyli wykładnika równego zero.

Wymagania:
Funkcja main - wczytuje od użytkownika liczbę podstawową oraz wykładnik, a następnie wywołuje odpowiednie funkcje w celu obliczenia potęgi.
Funkcja CalculatePowerRecursive - funkcja rekurencyjna, która przyjmuje liczbę podstawową i wykładnik, oblicza potęgę liczby i zwraca wynik.
Funkcja DisplayResult - przyjmuje wynik potęgowania jako argument i wyświetla go na ekranie w odpowiednim formacie.

Kroki do wykonania:
Program pobiera liczbę podstawową oraz wykładnik od użytkownika.
Program oblicza potęgę liczby za pomocą funkcji rekurencyjnej.
Program wyświetla wynik na ekranie.

Wynik działania programu:
Podaj liczbe podstawowa: 2
Podaj wykladnik: 5
2 do potegi 5 wynosi: 32
*/

#include <iostream>
using namespace std;

// Funkcja rekurencyjna do obliczania potęgi: base^exponent
int CalculatePowerRecursive(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Każda liczba do potęgi 0 to 1
    } else {
        return base * CalculatePowerRecursive(base, exponent - 1); // Rekurencyjny krok
    }
}

// Funkcja wyświetlająca wynik potęgowania
void DisplayResult(int base, int exponent, int result) {
    cout << base << " do potegi " << exponent << " wynosi: " << result << endl;
}

int main() {
    int base, exponent;

    // Wczytanie danych od użytkownika
    cout << "Podaj liczbe podstawowa: ";
    cin >> base;

    cout << "Podaj wykladnik: ";
    cin >> exponent;

    // Wywołanie funkcji rekurencyjnej
    int result = CalculatePowerRecursive(base, exponent);

    // Wyświetlenie wyniku
    DisplayResult(base, exponent, result);

    return 0;
}
