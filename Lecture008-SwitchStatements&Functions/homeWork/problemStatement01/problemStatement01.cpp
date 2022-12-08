#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an amount: " << endl;
    cin >> n;
    int num100, num50, num20, num1;

    switch (1)
    {
    case 1:
        num100 = n / 100;
        n = n % 100;
        cout << num100 << " number of $100 notes are required." << endl;
    case 2:
        num50 = n / 50;
        n = n % 50;
        cout << num50 << " number of $50 notes are required." << endl;
    case 3:
        num20 = n / 20;
        n = n % 20;
        cout << num20 << " number $20 notes are required." << endl;
    case 4:
        num1 = n / 1;
        n = n % 1;
        cout << num1 << " number of $1 notes are required." << endl;
        // default:
        //     cout << "Please enter a Number";
    }
}

// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;

//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee notes required are="<<Rs1<<endl;

//            }
// }