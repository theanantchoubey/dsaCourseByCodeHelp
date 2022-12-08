#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    //Taking from reverse form
    while (n != 0)
    {
        int lastBit = n & 1;
        ans = (lastBit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
   cout << ans <<endl;

   //Taking from sequence
   while(n!=0){
    // int firstBit = 
   }
}