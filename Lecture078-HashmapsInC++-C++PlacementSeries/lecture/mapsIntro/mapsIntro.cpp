#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    unordered_map<string, int> m;


    //Insertion
    //1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //What will happen
    m["mera"] = 2;

    //Search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;
    cout << m["unknownKey"] << endl;
    cout << m.at("unknownKey") << endl;

    //Size
    cout << m.size() << endl;
    
    //To check presence
    cout << m.count("love") << endl;

    //Erase
    m.erase("love");
    cout << m.size() << endl;

    // Traverse Map 
    // for(auto i:m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }cout << endl;

    // using Iterator 
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout << it-> first << " " << it-> second << endl;
        it++;
    }
    
    return 0;
}