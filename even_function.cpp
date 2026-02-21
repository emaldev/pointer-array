#include <iostream>
using namespace std;

int square(int x ){
    return x * x;
}
int Max(int x , int y){
    if(x > y)
    return x;
    else 
    return y;
}
int main(){
 int number1, number2;
 cout << "Enter 2 number :" << endl;
 cin >> number1 >> number2;

 
   if(number1 > number2){
    cout << "number1 is larger then number2" << endl;
   }
 
 else if(number2 > number1){
    cout << "number2 is larger then number1" << endl;
 }
 else{
    cout << "Both numbers are equal" << endl;
 }
  cout << "Max is:" << Max(number1, number2) << endl;
  cout << "Square of " << number1 << " is:" << square(number1) << endl;

 return 0;
}