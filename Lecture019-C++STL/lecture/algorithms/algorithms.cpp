#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout << "Finding 6 --> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower Bound --> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound --> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "Max --> " << max(a, b);
    cout << "Min --> " << min(a, b);
    swap(a, b);
    cout << endl
         << " a --> " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String -- > " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After Rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Working of Sort --> It is based on intro sort --> Made up using 3 algorithm combination -- quick sort, heap sort and insertion sort
    //  Sort function behind the scene
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}