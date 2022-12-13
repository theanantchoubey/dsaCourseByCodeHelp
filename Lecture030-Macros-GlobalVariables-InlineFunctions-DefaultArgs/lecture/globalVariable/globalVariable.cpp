#include <iostream>
using namespace std;
int score = 15;
void a(int& i){
    cout << score << " in a " << endl;
    char ch = 'a';
    score++;
    cout << i << endl;
    b(i);
}
void b(int& i){
    cout << i << endl;
    cout << score << " in b " << endl;
}
int main(){

    //Local Variable i for main function
    int i = 5;
    // a(i);

    // {
    //     int i = 2;
    //     cout << i << endl;
    // }
    cout << score << " in main " << endl;
    a(i);
    b(i);
    // cout << i << endl;

    // return 0;
}