#include <iostream>
using namespace std;

int power(int n)
{
    /// Base Case
    if (n == 0)
        return 1;

    // Recursive Relation
    // int smallerProblem = power(n - 1);
    // int biggerProblem = 2 * smallerProblem;

    return 2 * power(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;

    return 0;
}