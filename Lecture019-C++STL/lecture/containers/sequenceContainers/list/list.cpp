#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Doubly linked list
    // at operation does not work
    list<int> l;
    list<int> n(l);
    list<int> a(5, 100);
    for (int i : a)
    {
        cout << i << " ";
    }
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of List " << l.size() << endl;

}