#include <iostream>
using namespace std;

int fibonnaciSeries(int n)
{
    int num1 = 0, num2 = 1, nextNum = num1 + num2;
    for (int i = 0; i <= (n-1); i++)
    {
        if (i != 0 && i != 1)

        {

            nextNum = num1 + num2;
            num1 = num2;
            num2 = nextNum;
        }
    }
    return nextNum;
}
int main()
{
    int n;
    cin >> n;
    cout << fibonnaciSeries(n);
    return 0;
}