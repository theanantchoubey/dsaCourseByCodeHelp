#include <iostream>
using namespace std;

int main()
{
    char ch = '2';
    int num = 1;
    cout << endl;
    switch (2*num)
    {
    case 2:
        cout << "First" << endl;
        break;
    case '2':
        switch (num)
        {
        case 1:
            cout << "Value of num is " << num << endl;
            break;
        }
        cout << "character two" << endl;
        break;
    default:
        cout << "Is is default case" << endl;
    }
}