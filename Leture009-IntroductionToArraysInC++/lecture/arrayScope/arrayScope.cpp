#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << " Inside the function" << endl;

    //Updating array's first element
    arr[0] = 120; 

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " Going back to main function" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << "Printing to main function" << endl; 
        cout << arr[i] << " ";
    }
    cout << endl;
}