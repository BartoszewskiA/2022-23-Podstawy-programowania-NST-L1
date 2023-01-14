#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string tab[100];
    int n = 0; // pierwsza wolan pozycja
    fstream plik;
    string s;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }
    plik.close();

    for (int i = 0; i < n; i++)
        cout << tab[i] << endl;

    plik.open("dane.txt", ios::out);
    for (int i = 0; i < n; i++)
        plik << i + 1 << ") " << tab[i] << endl;

    plik.close();
    return 0;
}