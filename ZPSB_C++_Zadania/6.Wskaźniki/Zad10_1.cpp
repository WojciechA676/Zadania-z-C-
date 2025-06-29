/*
Zadanie 1 - Wskaźniki na zmienne
Napisz program, który umożliwia pracę ze wskaźnikami na zmienne.
Program będzie wykonywał operacje na wskaźnikach i zmiennych, 
a użytkownik będzie miał możliwość modyfikowania wartości zmiennych bezpośrednio przez wskaźniki.

Kroki do wykonania:
Zainicjuj dwie zmienne typu całkowitego: a i b.
Zainicjuj wskaźniki, które będą wskazywać na te zmienne.
Wypisz wartości zmiennych przed modyfikacją.
Zmodyfikuj wartości zmiennych przy użyciu wskaźników.
Wypisz zmodyfikowane wartości zmiennych po modyfikacji.

Wynik działania programu:
Przed modyfikacją:
a = 5
b = 10
Po modyfikacji:
a = 15
b = 20
*/



#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Pobranie wartości od użytkownika
    cout << "Podaj wartosc zmiennej a: ";
    cin >> a;
    cout << "Podaj wartosc zmiennej b: ";
    cin >> b;

    // Wskaźniki do zmiennych
    int* ptrA = &a;
    int* ptrB = &b;

    // Wyświetlenie wartości przed modyfikacją
    cout << "\nPrzed modyfikacja:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Modyfikacja zmiennych przez wskaźniki
    *ptrA += 10;  // zwiększ wartość a o 10
    *ptrB += 10;  // zwiększ wartość b o 10

    // Wyświetlenie wartości po modyfikacji
    cout << "\nPo modyfikacji:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}



