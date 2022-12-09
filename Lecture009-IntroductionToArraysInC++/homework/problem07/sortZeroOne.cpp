#include <iostream>
using namespace std;

int count(int inputArr[], int size, int integer)
{
    int integerCount = 0;
    for (int i = 0; i <= size; i++)
    {
        if (inputArr[i] == integer)
        {
            integerCount++;
        }
    }
    return integerCount;
}
void sortArr(int inputArr[], int size)
{
    int count0 = count(inputArr, size, 0);
    // int count1 = count(inputArr, size, 1);
    for (int i = 0; i < size; i++)
    {
        if (i < count0)
        {
            inputArr[i] = 0;
        }
        else
        {
            inputArr[i] = 1;
        }
        cout << inputArr[i] << " ";
    }
}
int main()
{
    int inputArr[10] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    sortArr(inputArr, 10);
}