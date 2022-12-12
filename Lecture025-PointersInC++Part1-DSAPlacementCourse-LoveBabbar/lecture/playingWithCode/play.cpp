#include <iostream>
using namespace std;


int main(){
    //Pointer to int is create and poiniting to some garbage address
    //Bad Practice
    // int *p;

    //Inspite do this
    // int *p = 0;

    // cout << *p << endl;


    int i = 5;


    int *p = 0;
    p = &i;
    //address
    cout << p << endl;
    //value
    cout << *p << endl;
   
   
   
    int *q = &i;
    //address
    cout << q << endl;
    //value
    cout << *q << endl;


    int num =5;
    int a = num;
    cout << "a Before " << num << endl;
    a++;
    cout << num << endl;
    cout << "a After "<< num << endl;

    int *p = &num;
    cout << "Before " << num << endl;
    (*p)++;
    cout << "a After "<< num << endl;


    //Copying one pointer to another pointer
    int *q = p;
    cout  << p << " - " << q << endl;
    cout  << *p << " - " << *q << endl;
    
    //IMPORTANT CONCEPT***
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl; 
    *t = *t + 1;
    cout << *t << endl;


    cout << "Before t " << t << endl;
    t= t+1;
    cout << "after t " << t << endl;
    return 0;
}