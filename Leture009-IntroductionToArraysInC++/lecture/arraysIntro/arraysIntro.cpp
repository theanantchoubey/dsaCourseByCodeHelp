#include <iostream>
using namespace std;

// Hold
void printArray(int arr[], int size)
{
    // Print the array
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing done" << endl;
}
int main()
{
    // Declare
    int number[15];

    // Accessing an array
    // cout << "Value at 14 index " << number[14];

    // Initializing an array
    int second[3] = {5, 7, 11};

    // Accessing an array
    // cout << endl
    //      << "Value at 20 index " << second[2];

    int third[15] = {2, 7};
    int n = 15;
    // Print the array
    // printArray(third, 15);

    int thirdSize = sizeof(third) / sizeof(int);
    // cout << "Size of third is  " <<thirdSize << endl;
    // Initializing all locations with 0
    int fourth[10] = {0};
    n = 10;
    // printArray(fourth, 10);

    // Initializing all locations with 1
    int fifth[10] = {1};
    n = 10;
    // printArray(fifth, 10);

    // int fifthSize = sizeof(fifth) / sizeof(int);
    // cout << "Size of fifth is  " <<fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;
    cout << "Printing the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "Printing done" << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << endl
         << "Everything is Fine" << endl
         << endl;

    return 0;
}