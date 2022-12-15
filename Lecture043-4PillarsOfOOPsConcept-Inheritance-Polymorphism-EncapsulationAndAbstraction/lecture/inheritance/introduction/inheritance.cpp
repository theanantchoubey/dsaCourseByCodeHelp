#include <iostream>
using namespace std;

class Human
{
// private:
// private:
public:
    int height;
    int weight;

    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        return this->weight = w;
    }
};
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
    int getHeight()
    {
        return this->height;
    }
};
int main()
{
    // MODE OF INHERITENCE
    Male m1;
    // cout << m1.getHeight() << endl;
    cout << m1.height << endl;

    /*
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    cout << object1.color << endl;
    object1.setWeight(84);
    cout << object1.weight << endl;
    object1.sleep();
    return 0;
    */
}