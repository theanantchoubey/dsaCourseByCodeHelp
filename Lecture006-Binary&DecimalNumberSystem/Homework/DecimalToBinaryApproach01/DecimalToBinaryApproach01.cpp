#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    while (n != 0)
    {
        int digit = n % 2;
        ans = digit;
        n = n / 2;
        cout << ans;
        //Storing and Reversing is required in code
    }
}