#include <iostream>
using namespace std;

int& func(int a){

    //Local variables
    int num =a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    //Bad pracitce
    int* ptr = &n;
    return ptr;

}
void update1(int& n)
{
    n++;
}

void update2(int n)
{
    n++;
}
int main()
{ /*
     int i = 5;

     // Create a Reference Variable
     int &j = i;

     cout << i << endl;
     i++;
     cout << i << endl;

     j++;
     cout << i << endl;

     cout << j << endl;
 */

    int n = 5;
    cout << "Before " << n << endl;
    update1(n);
    cout << "After " << n << endl;

    //bad Practice
    func(n);
    fun(n);
    return 0;
}