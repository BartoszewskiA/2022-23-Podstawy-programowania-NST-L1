#include <iostream>

using namespace std;

int main()
{
    int n, x, ile_dodatnich = 0, ile_ujemnych = 0;
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "x=";
        cin >> x;
        if (x >= 0)
            ile_dodatnich++;
        else
            ile_ujemnych++;
    }
    if (ile_dodatnich > ile_ujemnych)
    {
        cout << "Wiecej bylo dodatnicj";
    }
    else if (ile_dodatnich == ile_ujemnych)
    {
        cout << "po rowno";
    }
    else
    {
        cout << "wiecej bylo ujemnych";
    }
    return 0;
}