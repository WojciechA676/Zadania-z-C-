/*
Zadanie 1 - Obliczanie objętości brył za pomocą przeciążenia funkcji
Napisz program, który oblicza objętość wybranej bryły geometrycznej (sześcianu, prostopadłościanu lub walca) przy użyciu przeciążenia funkcji. Program powinien najpierw wyświetlić dostępne opcje, a użytkownik wybierze jedną z trzech brył do obliczenia objętości.

Wzory na objętość brył:
Sześcian: V=a3, gdzie a to długość boku sześcianu.
Prostopadłościan: V=a×b×h, gdzie a, b, i h to długość, szerokość i wysokość prostopadłościanu.
Walec: V=π×r2×h, gdzie π jest równe 3.1415, r to promień podstawy, a h to wysokość walca.

Wymagania:

Funkcja CalculateVolume - przeciążona funkcja, która oblicza objętość w zależności od przekazanych parametrów:
Dla sześcianu: przyjmuje jeden argument (długość boku).
Dla prostopadłościanu: przyjmuje trzy argumenty (długość, szerokość, wysokość).
Dla walca: przyjmuje dwa argumenty (promień podstawy i wysokość).
Funkcja DisplayResult - przyjmuje wynik obliczonej objętości jako argument i wyświetla go na ekranie w odpowiednim formacie.

Kroki do wykonania:

Program wyświetla użytkownikowi dostępne bryły do wyboru i podpowiada wzory na obliczenie objętości każdej z nich.
Program pobiera od użytkownika numer wybranej bryły oraz odpowiednie wymiary.
Program oblicza objętość wybranej bryły przy użyciu przeciążonej funkcji CalculateVolume.
Program wyświetla wynik obliczonej objętości na ekranie.

Wynik działania programu:

Wybierz bryle do obliczenia objetosci:
1 - Szescian (V = a^3)
2 - Prostopadloscian (V = a * b * h)
3 - Walec (V = pi * r^2 * h)
Wybierz numer bryly: 2
Podaj dlugosc: 4
Podaj szerokosc: 5
Podaj wysokosc: 6
Objetosc wynosi: 120
*/

#include <iostream>
using namespace std;

// Stała dla liczby PI
const double PI = 3.1415;

// Przeciążona funkcja dla sześcianu (1 parametr)
double CalculateVolume(double a) {
    return a * a * a;
}

// Przeciążona funkcja dla prostopadłościanu (3 parametry)
double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

// Przeciążona funkcja dla walca (2 parametry: promień i wysokość)
double CalculateVolume(int r, double h) {
    return PI * r * r * h;
}

// Funkcja wyświetlająca wynik
void DisplayResult(double volume) {
    cout << "Objetosc wynosi: " << volume << endl;
}

int main() {
    int choice;
    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1 - Szescian (V = a^3)\n";
    cout << "2 - Prostopadloscian (V = a * b * h)\n";
    cout << "3 - Walec (V = pi * r^2 * h)\n";
    cout << "Wybierz numer bryly: ";
    cin >> choice;

    if (choice == 1) {
        // Sześcian
        double a;
        cout << "Podaj dlugosc boku: ";
        cin >> a;
        double volume = CalculateVolume(a);
        DisplayResult(volume);

    } else if (choice == 2) {
        // Prostopadłościan
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;
        double volume = CalculateVolume(a, b, h);
        DisplayResult(volume);

    } else if (choice == 3) {
        // Walec
        int r;
        double h;
        cout << "Podaj promien podstawy: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;
        double volume = CalculateVolume(r, h);
        DisplayResult(volume);

    } else {
        cout << "Niepoprawny wybor." << endl;
    }

    return 0;
}


