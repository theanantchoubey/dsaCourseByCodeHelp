#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        //For Space
        int space = row -1;
        while(space && space<=row){
            cout<<" ";
            space = space -1;

        }

        //For Numbers
        int col = 1;
        int numbers = n-row+1;
        while(col<=numbers){
            cout << row;
            col = col+1;
        }
        cout<<endl;
        row = row+1;

    }
}