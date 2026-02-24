#include <iostream>
using namespace std;

int printNum(int x){
    return x;
}

float printNum(float  y){
       return y;
}


int main(){

    int a;
    int b;
    cin >> a >> b;
      int result1 =  printNum(a);
      int result2 =  printNum(b);
      cout << "integer number is :" << result1 << endl << "and floar number is :"  << result2 << endl;


return 0;

}