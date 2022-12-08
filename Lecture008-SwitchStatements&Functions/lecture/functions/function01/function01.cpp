#include <iostream>
using namespace std;
int power(int num1, int num2)
{
    // int a, b;
    // cin >> a >> b;
    // cout << num1 <<endl;
    int ans = 1;
    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int answer = power(a, b);
    cout << answer << " is the answer.";
    int c, d;
    cin >> c >> d;
    answer = power(c, d);
    cout << answer << " is the answer.";
    // int ans = power();
    // cout << ans << " is the answer";
}