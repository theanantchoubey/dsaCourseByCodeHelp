#include <iostream>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};
    // Create an array of Count of Characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        // LowerCase
        number = ch - 'a';
        arr[number]++;
    }

    // Find maximum occ characterf
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        maxi = max(maxi, arr[i]);
    }

  
    return 'a' + ans;
}
int main()
{
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;
    return 0;
}