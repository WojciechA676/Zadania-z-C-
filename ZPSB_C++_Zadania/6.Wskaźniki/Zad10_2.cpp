/*
Zadanie 2 - Największa i najmniejsza wartość w tablicy float
Napisz program, który operuje na tablicy z wstępnie zdefiniowanymi 10 wartościami typu float,
a następnie przekazuje je do funkcji za pomocą wskaźników w celu znalezienia największej i 
najmniejszej wartości. Wyniki należy zwrócić do głównego programu i wyświetlić.

Tablica zawiera następujące wartości:

1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2.

Wymagania:
Funkcja FindMinMax:
Przyjmuje wskaźnik do tablicy liczb typu float oraz jej rozmiar.
Znajduje największą i najmniejszą wartość w tablicy.
Ustawia wartości największej i najmniejszej liczby w zmiennych max i min, przekazanych jako wskaźniki.
W funkcji main:
Należy stworzyć zmienne max i min, które zostaną ustawione przez funkcję FindMinMax.
Wyniki, czyli największą i najmniejszą wartość, wyświetl w funkcji main.

Kroki do wykonania:

Zdefiniuj tablicę float o 10 elementach, wypełnioną podanymi wartościami.
Przekaż tablicę, jej rozmiar oraz wskaźniki do zmiennych max i min do funkcji FindMinMax.
W funkcji FindMinMax znajdź największą i najmniejszą wartość w tablicy.
Zwróć wyniki do głównego programu przez wskaźniki.
Wyświetl największą i najmniejszą wartość w funkcji main.

Wynik działania programu:

Tablica: 1.5 -3.2 4.8 7 -1.1 0 3.3 -6.6 8.9 2.2 
Najwieksza liczba: 8.9
Najmniejsza liczba: -6.6
*/


#include <iostream>
using namespace std;

// Funkcja znajdująca największą i najmniejszą wartość w tablicy
void FindMinMax(float* tablica, int rozmiar, float* min, float* max) {
    *min = *tablica;  // początkowo zakładamy pierwszy element jako min i max
    *max = *tablica;

    for (int i = 1; i < rozmiar; ++i) {
        if (*(tablica + i) < *min) {
            *min = *(tablica + i);
        }
        if (*(tablica + i) > *max) {
            *max = *(tablica + i);
        }
    }
}

int main() {
    // Zdefiniowana tablica float
    float liczby[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
    float min, max;

    // Wywołanie funkcji przekazując wskaźniki
    FindMinMax(liczby, 10, &min, &max);

    // Wyświetlenie tablicy
    cout << "Tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;

    // Wyświetlenie wyników
    cout << "Najwieksza liczba: " << max << endl;
    cout << "Najmniejsza liczba: " << min << endl;

    return 0;
}
