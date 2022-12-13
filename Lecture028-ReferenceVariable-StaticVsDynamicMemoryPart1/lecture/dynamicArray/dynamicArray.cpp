#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }

    return sum;
}
int main()
{
    // char ch = 'q';
    // cout << sizeof(ch) << endl;
    // char *c = &ch;
    // cout << sizeof(c) << endl;

    int n;
    cin >> n;

    // Variable Size Array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Answer is " << ans << endl;


    //////DON'T RUN BELOW CODE///////
    //Static
    // while(true){
    //     int i = 5;
    // }
    //Dynamic
    // while(true){
    //     int* ptr = new int;
    // }
    ///////DON"T RUN ABOVE CODE//////

    
    return 0;
}