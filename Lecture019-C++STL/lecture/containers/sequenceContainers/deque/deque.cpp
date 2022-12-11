#include <iostream>
#include <deque>
using namespace std;
int main()
{
    // Helps in deletion and insertion in both end
    // It is also dynamic
    // Random Access is also possible

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // d.pop_back();
    // d.pop_front();
    // for(int i: d){
    //     cout << i << " ";
    // }cout << endl;

    cout << "Print first index Element --> " << d.at(1) << endl;

    cout << "Front : " << d.front() << endl;
    cout << "Back : " << d.back() << endl;

    cout << "Empty or not" << d.empty() << endl;

    cout << "Before Erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase " << d.size() << endl;
    for(int i: d){
        cout << i << " ";
    }cout << endl;

    return 0;
}