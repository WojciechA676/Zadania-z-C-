/*
2. Zmienna
Napisz program, który przypisze dwie liczby całkowite do zmiennych, a następnie wyświetli ich sumę, różnicę i iloczyn.

Przykład wyjścia:

Liczba a: 5
Liczba b: 3
Suma: 8
Różnica: 2
Iloczyn: 15
*/

#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    std::cout << "Liczba a: " << a << std::endl;
    std::cout << "Liczba b: " << b << std::endl;
    std::cout << "Suma: " << a + b << std::endl;
    std::cout << "Różnica: " << a - b << std::endl;
    std::cout << "Iloczyn: " << a * b << std::endl;

    return 0;
}
