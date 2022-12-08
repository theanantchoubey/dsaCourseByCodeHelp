#include <iostream>
using namespace std;

int printAP(int n)
{
    // Return nth tern
    return (3 * n) + 7;
}
int main()
{
    int n;
    cin >> n;
    cout << printAP(n);
    return 0;
}