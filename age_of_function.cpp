#include <iostream>
using namespace std;

int findMax(int a, int b){
    if (a > b){
        return a;
    }else {
        return b;
    }
}

int main()
   {
    int x , y;
    cout << "Please Enter 2 number :"<< endl;
    cin >> x  >> y;

    int result = findMax(x, y);

    cout << "The maximum number is :" << result << endl;
    return 0;
   }