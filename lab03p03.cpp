#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            return 0;
        cout << i << " ";
    }
    cout<<"to jest wykonane na koncu programu";
    return 0;
}