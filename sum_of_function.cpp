#include <iostream>
using namespace std;

void printNum(int x){
    cout << " integer number is :" << x << endl;
}

void printNum(float  y){
         cout << " floar number is :" << y;
}


int main(){

    int a;
    int b;
    cin >> a >> b;
        printNum(a);
    printNum(b);


return 0;

}