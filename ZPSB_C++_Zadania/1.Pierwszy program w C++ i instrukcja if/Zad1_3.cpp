/*
3. Typy danych
Stwórz program, który wyświetli różne typy danych: int, float, char, oraz bool. Zainicjuj zmienne tymi typami i wyświetl ich wartości.

Przykład wyjścia:

Zmienna całkowita: 10
Zmienna zmiennoprzecinkowa: 3.14
Zmienna znakowa: A
Zmienna logiczna: true
*/

#include <iostream>

int main() {
    int liczba_calkowita = 10;
    float liczba_float = 3.14f;
    char znak = 'A';
    bool logiczna = true;

    std::cout << "Zmienna calkowita: " << liczba_calkowita << std::endl;
    std::cout << "Zmienna zmiennoprzecinkowa: " << liczba_float << std::endl;
    std::cout << "Zmienna znakowa: " << znak << std::endl;
    std::cout << "Zmienna logiczna: " << std::boolalpha << logiczna << std::endl;

    return 0;
}
