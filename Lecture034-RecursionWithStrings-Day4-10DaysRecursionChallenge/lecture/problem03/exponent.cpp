#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base Case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
        return a;

    // Recursive Call
    int ans = power(a, b / 2);

    // If b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // If b is odd
        return a * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << "Answer is --> " << ans << endl;
    return 0;
}