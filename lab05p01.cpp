#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    int ile = 0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        ile += s.length();
    }
    plik.close();

    cout << "Liter: " << ile;
    return 0;
}