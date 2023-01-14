#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    fstream plik;
    plik.open(nazwa, ios::app);
    string temp;
    do
    {
        cout << ": ";
        getline(cin, temp);
        if (temp.length()==0)
            break;
        plik << temp << endl;
    } while (1);

    plik.close();
    return 0;
}