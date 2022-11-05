#include <iostream>

using namespace std;

int main()
{
    int x, suma = 0, i = 0;
    // do
    // {
    //     cout << "x=";
    //     cin >> x;
    //     if (x >= 0)
    //     {
    //         suma += x; // suma = suma + x;
    //         i++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // } while (1);
    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        suma += x;
        i++;
    }
    if (i > 0)
    {
        double srednia = (double)suma / i;
        cout << "Srednia = " << srednia;
    }
    else
    {
        cout << "zbior pusty";
    }
    return 0;
}