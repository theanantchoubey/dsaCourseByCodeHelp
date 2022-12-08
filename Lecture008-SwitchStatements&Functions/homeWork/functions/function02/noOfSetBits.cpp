#include <iostream>
using namespace std;

//Calculate Individual Bits
int intBits(int n)
{
    int totalSetBits = 0;
    while (n != 0)
    {

        int bit = n & 1;
        if (bit == 1)
        {
            totalSetBits++;
        }
        // cout << bit;
        n = n >> 1;
    }

    return totalSetBits;
}

//Calculate SetOfBits
int noOfSetBits(int a, int b)
{
    int totalBits = intBits(a) + intBits(b);
    return totalBits;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << noOfSetBits(a, b);
    return 0;
}