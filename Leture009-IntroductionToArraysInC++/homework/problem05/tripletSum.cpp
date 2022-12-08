#include <iostream>
using namespace std;

void tripletSum(int arr[], int size)
{
    int num1 = 0;
    int num2 = 1;
    int num3 = 2;
    while (num1 <= size)
    {
        cout << arr[num1] + arr[num2] + arr[num3] << " ";
        num1 = num1 + 3;
        num2 = num2 + 3;
        num3 = num3 + 3;
    }
}

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    tripletSum(arr, size);

    // printArray(arr, size);
}