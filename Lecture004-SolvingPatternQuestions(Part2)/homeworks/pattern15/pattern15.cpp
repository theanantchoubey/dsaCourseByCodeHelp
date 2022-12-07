#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // First Triangle - Print Numbers
        int colOne = 1;
        int numOne = n - row + 1;
        while (colOne <= numOne)
        {
            cout << colOne;
            colOne = colOne + 1;
        }

        // Second Triangle - Stars
        int stars = (row - 1) * 2;
        while (stars)
        {
            cout << "*";
            stars = stars - 1;
        }

        // Third Triangle - PrintNumbers
        int colTwo = 1;
        int numTwo = n - row + 1;
        int a = numTwo;
        while (colTwo <= numTwo)
        {
            cout << a;
            a = a - 1;
            colTwo = colTwo + 1;
        }

        cout << endl;
        row = row + 1;
    }
}