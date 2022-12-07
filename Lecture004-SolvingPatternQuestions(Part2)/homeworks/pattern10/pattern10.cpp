#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space && space <= row)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        int star = n - row + 1;
        while (col <= star)
        {
            cout << "*";
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
}