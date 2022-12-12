#include <iostream>
using namespace std;

//3 4 11 2 12 1 7 8 7

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    cout << "Printing the sum --> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
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
    int ansIndex = largestRowSum(arr, 3, 3);
    cout << "Max row is at index -->> " << ansIndex << endl;
    return 0;
}