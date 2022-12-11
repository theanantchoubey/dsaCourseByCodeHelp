#include <iostream>
#include <set>

using namespace std;

int main(){
    //Stores only unique elements.
    //Doesn't allow modification - Only insert and delete 
    // Returns in sorted order
    // Unordered Set - random
    // Ordered set - slow
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i: s){
        cout << i << endl;
    }cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    //Note: Complextiy of insertion is Big O of log n
    s.erase(it);

    for(auto i: s){
        cout << i << endl;
    }cout << endl;

    cout<<"5 is present or not ? -->" << s.count(-5)<< endl;

    set<int>::iterator itr= s.find(5);
    for(auto it = itr; it!=s.end(); it++){
        cout << *it<<" ";
    }cout << endl;
    cout << "Value present at itr --> " << *it << endl;

    // Insert, Find, Erase or Count have time complexity of O(log n);
    // Size, begin, end, empty have time complexity of O(1);
    return 0;

}