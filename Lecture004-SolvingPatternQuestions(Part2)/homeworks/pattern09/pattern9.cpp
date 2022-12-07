#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int star = n;
    while (row <= n)
    {
        int col = 1;
        while (col <= star)
        {
            cout << "*";
            col = col + 1;
        }
        star = n-row;
        cout << endl;
        row = row + 1;
    }
}