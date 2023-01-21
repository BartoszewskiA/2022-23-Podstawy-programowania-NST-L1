#include <iostream>
#include <string>

using namespace std;
struct osoba
{
    string nazwisko;
    string imie;
    int wiek;
};

int main()
{
    osoba tab[3];
    string temp;
    for (int i = 0; i < 3; i++)
    {
        cout << "Podaj imie: ";
        getline(cin, tab[i].imie);
        cout << "Podaj nazwisko: ";
        getline(cin, tab[i].nazwisko);
        cout << "Podaj wiek: ";
        getline(cin, temp);
        tab[i].wiek = atoi(temp.c_str());
    }

    for (int i = 0; i < 3; i++)
        cout << "Nazwisko: " << tab[i].nazwisko << endl
             << "Imie: " << tab[i].imie << endl
             << "Wiek: " << tab[i].wiek << endl;
    return 0;
}