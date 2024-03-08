#include <iostream>
#include <cmath>

using namespace std;

int SUMA(int a, int b) {
    return a + b;
}

int ROZNICA(int a, int b) {
    return a - b;
}

int ILOCZYN(int a, int b) {
    return a * b;
}

int ILORAZ(int a, int b) {
    if (b == 0) {
        cout << "Nie dziel przez zero!" << endl;
        return 0;
    }
    return a / b;
}

int czyPitagorejskie(int a, int b, int c) {
    return (a * a + b * b == c * c) ? 1 : 0;
}

int czyKwadrat(int liczba) {
    int pierwiastek = sqrt(liczba);
    return (pierwiastek * pierwiastek == liczba) ? 1 : 0;
}

int main() {
    int liczba1, liczba2, liczba3;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    cout << "Suma: " << SUMA(liczba1, liczba2) << endl;
    cout << "Różnica: " << ROZNICA(liczba1, liczba2) << endl;
    cout << "Iloczyn: " << ILOCZYN(liczba1, liczba2) << endl;
    cout << "Iloraz: " << ILORAZ(liczba1, liczba2) << endl;

    cout << "Podaj trzy liczby, aby sprawdzić czy są pitagorejskie: ";
    cin >> liczba1 >> liczba2 >> liczba3;
    cout << "Czy liczby sa pitagorejskie: " << czyPitagorejskie(liczba1, liczba2, liczba3) << endl;

    cout << "Podaj liczbe, aby sprawdzić czy jest kwadratem liczby calkowitej: ";
    cin >> liczba1;
    cout << "Czy liczba jest kwadratem liczby calkowitej: " << czyKwadrat(liczba1) << endl;

    return 0;
}