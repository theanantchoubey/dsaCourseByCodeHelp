#include <iostream>
using namespace std;

int main()
{
    char ch = '2';
    int num = 1;
    cout << endl;
    switch (ch)
    {
    case 1:
        cout << "First" << endl;
            // continue/;
        // break;
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