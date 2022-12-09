#include <iostream>
using namespace std;
 // Not Solved Yet
int findUnique(int arr[], int size)
{
    int uniSize = 0;
    int uniqueArr[uniSize];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && j != i)
            {
                return 0;
            }
            else
            {
                cout << "Unique Element: " << arr[j] << endl;
            }
        }
    }
    return arr[1];
}
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << findUnique(arr, size);
}