#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba ktos;
    ktos.imie = "Jan";
    ktos.nazwisko = "kowalski";
    ktos.wiek = 30;

    cout << "Nazwisko: " << ktos.nazwisko << endl
         << "Imie: " << ktos.imie << endl
         << "Wiek: " << ktos.wiek << endl;
    return 0;
}