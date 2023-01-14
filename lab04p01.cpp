#include <iostream>
#include <string>

using namespace std;

int main()
{
    string zdanie;
    cout << "Podaj tekst:";
    // cin >> zdanie;
    getline(cin, zdanie);
    cout << "Podales zdanie: " << zdanie;
    return 0;
}