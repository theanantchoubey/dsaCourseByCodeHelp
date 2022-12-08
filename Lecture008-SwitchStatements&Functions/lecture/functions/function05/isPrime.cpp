#include <iostream>
using namespace std;

// 1 - Prime Number
// 0 - Not a Prime Number

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        // divided - not a prime number
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << " is a Prime number" << endl;
    }

    cout << " not a Prime Number" << endl;

    return 0;
}