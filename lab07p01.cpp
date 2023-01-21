#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct osoba
{
    string nazwisko;
    string imie;
    int wiek;
} osoby[100];

int main()
{
    fstream plik;
    plik.open("osoby.dbt", ios::in);
    if (!plik.good())
    {
        cout << "Brak bazy danych";
        return 0;
    }
    string s;
    getline(plik, s);
    int n = atoi(s.c_str());
    for (int i = 0; i < n; i++)
    {
        getline(plik, osoby[i].imie);
        getline(plik, osoby[i].nazwisko);
        getline(plik, s);
        osoby[i].wiek = atoi(s.c_str());
    }
    plik.close();

    for (int i = 0; i < n; i++)
        cout << "Nazwisko: " << osoby[i].nazwisko << endl
             << "Imie: " << osoby[i].imie << endl
             << "Wiek: " << osoby[i].wiek << endl;
    return 0;
}