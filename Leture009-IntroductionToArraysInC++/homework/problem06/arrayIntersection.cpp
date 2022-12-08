#include <iostream>
using namespace std;

// Creating and Inserting in a new Array is left and sorting
void intersectArray(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}
int main()
{
    int arr1[9] = {6, 4, 6, -6, 2, 8, 7, 9, 8};
    int arr2[9] = {9, 11, 6, -5, 44, 0, 7, 1, 0};

    intersectArray(arr1, 9, arr2, 9);
}