#include <iostream>
#include <queue>
using namespace std;

int main(){
    //First in - first out
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout << "Size before pop -->" << q.size() << endl;

    cout << "First Element "<<q.front() << endl;
    q.pop();
    cout << "First Element "<<q.front() << endl;

    cout << "Size after pop -->" << q.size() << endl;

    


    return 0;
}