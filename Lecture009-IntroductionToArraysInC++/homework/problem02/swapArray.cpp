#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int num1 = 0;
    int num2 = 1;
    while (num2 < size)
    {
        swap(arr[num1], arr[num2]);
        num1 = num1 + 2;
        num2 = num2 + 2;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
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

    swapAlternate(arr, size);

    printArray(arr, size);
}