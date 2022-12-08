#include <iostream>
using namespace std;
int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of the array is " << arraySum(arr, n) << endl;
}