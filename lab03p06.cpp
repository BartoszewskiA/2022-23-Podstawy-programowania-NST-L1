#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int i = 0;
    while (1)
    {
        cout << "x=";
        cin >> tab[i];
        if (tab[i] < 0)
            break;
        i++;
    }
    for (int j = 0; j < i; j++)
        cout << tab[j] << " ";
    return 0;
}