#include <iostream>
using namespace std;
   
   int sumNumber(int a, int b)
     {
        if (a > b){
            cout << "max number is :" << a;
            return a;
        }else {
            cout << "max number is :" << b;
            return b;
        }
     }
int main()
   {
       int a, b;
       cout <<"Please Enter 2 number "  << endl;
            cin >> a >> b;
       sumNumber(a, b);
       return 0;
   }