#include <iostream>
#include <time.h>

using namespace std;

struct RGB
{
    int R;
    int G;
    int B;
};

RGB losuj_kolor();

int main()
{
    srand(time(NULL));
    RGB wylosowany = losuj_kolor();
    cout << "R=" << wylosowany.R << " G=" << wylosowany.G << " B=" << wylosowany.B << endl;
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