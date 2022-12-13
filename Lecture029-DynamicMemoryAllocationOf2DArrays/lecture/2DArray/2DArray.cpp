#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    int col;
    cin >> col;

    // Creating a 2D Array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Creation done

    // Taking Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // Print Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing Memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}