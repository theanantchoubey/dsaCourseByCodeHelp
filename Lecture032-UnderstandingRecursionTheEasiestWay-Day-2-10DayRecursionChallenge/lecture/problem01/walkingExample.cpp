#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "source " << src << " destination " << dest << endl;
    // Base Case
    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }

    // Processing - Move one step ahead
    src++;

    // Recursive Call
    reachHome(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;
    reachHome(src, dest);

    return 0;
}