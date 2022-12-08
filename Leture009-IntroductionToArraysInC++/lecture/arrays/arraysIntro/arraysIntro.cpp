#include <iostream>
using namespace std;

// Hold
void printArray()
{
}
int main()
{
    // Declare
    int number[15];

    // Accessing an array
    cout << "Value at 14 index " << number[14];

    // Initializing an array
    int second[3] = {5, 7, 11};

    // Accessing an array
    cout << endl
         << "Value at 20 index " << second[2];

    int third[15] = {2, 7};
    int n = 15;
    // Print the array
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    // Initializing all locations with 0
    int fourth[10] = {0};
    n = 10;
    // Print the array
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }
   
    // Initializing all locations with 1
    int fifth[10] = {1};
    n = 10;
    // Print the array
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fifth[i] << " ";
    }



    cout << endl
         << "Everything is Fine" << endl
         << endl;

    return 0;
}