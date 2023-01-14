#include <iostream>
#include <string>

using namespace std;

int main()
{
    string zdanie;
    cout << "Podaj tekst:";
    getline(cin, zdanie);
    for (int i = zdanie.length()-1; i >=0; i--)
        cout << zdanie[i];
    return 0;
}