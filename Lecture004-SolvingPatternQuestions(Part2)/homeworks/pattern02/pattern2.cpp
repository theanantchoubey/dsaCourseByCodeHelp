#include <iostream>
using namespace std;

int main()
{
    int n;
    int row = 1;
    cin >> n;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count;
            col = col + 1;
            count = count + 1;
        }
        cout << endl;
        row = row + 1;
    }
}