#include <iostream>
using namespace std;

int findMax(int a, int b){
    if(a > b){
        cout << "The  large number is a   " << a << endl;
        return a;
    }else {
        cout << "The large number is "  << b << endl;
        return b;
    }   
}
int main()
   {
    int a , b;
    cout << "Enter 2 number :";
    cin >> a >> b;
   findMax(a , b);
       

    return 0;

   }