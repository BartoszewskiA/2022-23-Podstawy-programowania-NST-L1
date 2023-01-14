#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[100];
    for (int i = 0; i < 100; i++)
    {
        tab[i] = rand() % 21 - 10;
    }
    for (int i = 0; i < 100; i++)
    {
        if (tab[i] < 0)
            cout << "t[" << i << "]=" << tab[i] << "  ";
    }
    cout << endl
         << endl;
    for (int i = 0; i < 100; i++)
    {
        if (tab[i] == 0)
            cout << "t[" << i << "]=" << tab[i] << "  ";
    }
    cout << endl
         << endl;
    for (int i = 0; i < 100; i++)
    {
        if (tab[i] > 0)
            cout << "t[" << i << "]=" << tab[i] << "  ";
    }
    return 0;
}