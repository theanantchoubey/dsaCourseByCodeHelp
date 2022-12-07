#include <iostream>
using namespace std;

int main()
{
    // PRINT FIRST PROGRAM
    //  cout << "Hello World!" << endl;

    // DATA TYPES
    //  int a = -50.25;
    //  cout<<a<<endl;

    // char ch = 'a';
    // cout<<ch<<endl;

    // bool b = 1;
    // cout<<b<<endl;

    // float f = -0.25;
    // cout<<f<<endl;

    // NAMING CONVENTIONS
    // int 24h = 54;
    // cout <<24h<<endl;

    // int _s = 5;
    // cout << _s<< endl;

    // int a = 'a';
    // cout<<a<<endl;

    // TYPE CASTING -- GEEKSFORGEEKS BLOG - https://www.geeksforgeeks.org/type-conversion-in-c/
    // TYPE CASTING--IMPLICIT CONVERSION (Automatic Type Conversion)
    // int x = 54;
    // char y = 'a';
    // float z = 2.2 + x;
    // x = x+y;
    
    // cout << x << endl   
    //     << y << endl
    //     << z << endl;

    // TYPE CASTING--EXPLICIT CONVERSION (User Defined Conversion)
    //Conversion by Assignment
    // double x = 52.2;
    // int sum = (int)x + 5;
    // cout << sum << endl;

    //Conversion by Cast Operator
    float f = 3.5;
    int b = static_cast<int>(f);
    cout <<b;
    // return 0;

    // C++ supports four types of casting:
    // 1. Static Cast
    // 2. Dynamic Cast
    // 3. Const Cast
    // 4. Reinterpret Cast

    
}