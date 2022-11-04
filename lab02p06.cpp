#include <iostream>

using namespace std;

int main()
{
    int n=12, m=8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << i*j << "\t";
        }
        cout << endl;
    }
    return 0;
}