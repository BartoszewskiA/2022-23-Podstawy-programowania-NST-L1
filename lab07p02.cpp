#include <iostream>
#include <time.h>

using namespace std;

struct RGB
{
    int R;
    int G;
    int B;
} kolory[100];

RGB losuj_kolor();
void wypisz_kolor(RGB kolor);

int main()
{
    srand(time(NULL));
    int n;
    cout << "Ile kolorow wylosowac: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        kolory[i] = losuj_kolor();
    for (int i = 0; i < n; i++)
        wypisz_kolor(kolory[i]);
    return 0;
}

RGB losuj_kolor()
{
    RGB kolor;
    kolor.R = rand() % 256;
    kolor.G = rand() % 256;
    kolor.B = rand() % 256;
    return kolor;
}

void wypisz_kolor(RGB kolor)
{

    cout << "[R=" << kolor.R
         << " G=" << kolor.G
         << " B=" << kolor.B << "] "
         << endl;
}