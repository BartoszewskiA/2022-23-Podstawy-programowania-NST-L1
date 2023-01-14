#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char znak;
    cout << "Podaj tekst:";
    getline(cin, s);
    cout<<"Podaj znak: ";
    znak = getchar();
    int ile =0;
    for (int i=0; i<s.length(); i++)
        if(s[i]==znak) ile++;
    cout<< "Znak \""<<znak<< "\" wystapil "<<ile<< " razy";
    return 0;
}