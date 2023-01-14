#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik_1, plik_2;
    string temp;
    plik_1.open("dane.txt", ios::in);
    if (!plik_1.good())
    {
        cout << "blad pliku";
        return 0;
    }
    plik_2.open("wynik.txt", ios::out);
    // oba pliki sa otwarte
    int licznik = 0;
    while (!plik_1.eof())
    {
        getline(plik_1, temp);
        if (temp.length() > 0)
        {
            licznik++;
            plik_2 << licznik << ") " << temp << endl;
        }
        else
            plik_2 << endl;
    }

    plik_1.close();
    plik_2.close();
    return 0;
}