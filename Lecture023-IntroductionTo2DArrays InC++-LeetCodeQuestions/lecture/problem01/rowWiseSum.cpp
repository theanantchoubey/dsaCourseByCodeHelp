#include <iostream>
using namespace std;

// To print Column wise sum
void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing the sum --> " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}
// To print Row wise sum
void printRowSum(int arr[][3], int row, int col)
{
    cout << "Printing the sum --> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3];

    cout << "Enter the elements" << endl;
    // Tanking input --> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    // print
    cout << "Printing the array" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printRowSum(arr, 3, 3);
    printColSum(arr, 3, 3);
    return 0;
}