#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "hello Love Babbar!" << endl;
    }
    void sayHello(string name)
    {
        cout << "hello " << name << endl;
    }
    int sayHello(char name)
    {
        cout << "hello Babbar" << endl;
        return 1;
    }
};

int main()
{

    A obj;
    obj.sayHello();

    return 0;
}