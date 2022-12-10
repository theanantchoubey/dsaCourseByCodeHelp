#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Go to right
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // Go to Left
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid +1;
        }
        else if (key > arr[mid])
        { // Go to right
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // Go to Left
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
     cout << "First occurenece of 3 is " << firstOcc(even, 11, 3) << endl;
     cout << "Last occurenece of 3 is " << lastOcc(even, 11, 3) << endl;
    return 0;
}