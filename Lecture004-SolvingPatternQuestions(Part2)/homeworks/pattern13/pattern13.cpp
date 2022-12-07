#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // For Space
        int space = row - 1;
        while (space && space <= row)
        {
            cout << " ";
            space = space - 1;
        }

        // For Numerics
        int col = 1;
        int num = row;
        int noOfNum = n -row +1;
        while (col <= noOfNum)
        {
            cout << num;
            num = num + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}