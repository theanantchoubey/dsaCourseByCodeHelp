#include <iostream>
#include <map>

using namespace std;

int main()
{
    // A datastructure in which values are stored in Key form
    // One key will point to one value
    map<int, string> m;
    m[1] = "Babbar";
    m[2] = "Love";
    m[13] = "Kumar";

    // Another way of insertion
    m.insert({5, "Bheem"});

    cout << "Before Erase " << endl;

    // Sorted map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // Unordered map gives randomly

    cout << "Finding 13 --> " << m.count(-13) << endl;

    m.erase(13);
    cout << "After Erase " << endl;

    // TIME COMPLEXITY --> for insert, erase, find and count --> Time Complexity --> O (log n) [in Case of map as it is implemented using tree];
    // Unordered map --> Implements using hashtable --> Time Complexity --> O(1);

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}

