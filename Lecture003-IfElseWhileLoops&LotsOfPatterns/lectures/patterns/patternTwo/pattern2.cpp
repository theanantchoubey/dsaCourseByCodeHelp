#include <iostream>
using namespace std;

int main()
{
    // PS: Print (for n =3);
    //  111
    //  222
    //  333
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}