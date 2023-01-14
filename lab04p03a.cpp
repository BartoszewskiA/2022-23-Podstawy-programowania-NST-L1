#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char znak;
    cout << "Podaj tekst:";
    getline(cin, s);
    cout << "Podaj znak: ";
    znak = getchar();
    int ile = 0;
    for (int i = 0; i < s.length(); i++)
        if (toupper(s[i]) == toupper(znak))
            ile++;
    cout << "Znak \"" << "a" << "\" wystapil " << ile << " razy";
    return 0;
}