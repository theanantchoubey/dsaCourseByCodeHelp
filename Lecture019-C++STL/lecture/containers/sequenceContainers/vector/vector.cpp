#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5, 1);

    // Copying a in a vector
    vector<int> last(a);
    // Print a
    cout << "Print a " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    // Print last
    cout << "Print a " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "Size --> " << v.size() << endl;

    cout << "Element at 2nd Index" << v.at(2) << endl;

    cout << "Front" << v.front() << endl;
    cout << "Back" << v.back() << endl;

    cout << "Before Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "After Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // By Clearing vector size becomes 0, not capacity
    //  Capacity - memory assigned
    cout << "Before Clear Size " << v.size() << endl;
    v.clear();
    cout << "After Clear Size " << v.size() << endl;
}