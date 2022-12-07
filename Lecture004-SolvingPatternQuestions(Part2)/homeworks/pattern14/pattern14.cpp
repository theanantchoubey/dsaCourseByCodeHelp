#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int val = 1;
    while (row <= n)
    {
        // For Space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // For Numbers
        int col = 1;
        while (col <= row)
        {
            cout << val ;
            val = val + 1;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}