#include <iostream>
using namespace std;

int square(int x){
    return x * x;
}
bool isEven(int x){
    return x % 2 == 0;
}
int main(){
   int number;
   cout << "Enter a number :> ";
   cin >> number;
   if(isEven(number)){
    cout << "Number is even" << endl;
   }
   else{
    cout << "Number is odd" << endl;
   }
   cout << "Spuare is :" << square(number) << endl;
    return 0;
}