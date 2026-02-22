#include <iostream>
using namespace std;

int main(){
  int number1, number2;
  cout << "Enter 2 number "<< endl;
  cin >> number1 >> number2;
  char  op;
  cout << "Enter a operator (+ , - , * , /):";
  cin >> op;



   switch(op){
    case '+':
        cout << number1 << " + " << number2 << "=" << number1 + number2;
        break;
    case '-':
       cout << number1 << " - " << number2 << "=" << number1 - number2;
       break;
    case '*':
      cout << number1 << " * " << number2 << "=" << number1 * number2;
      break;
    case '/':
       if(number2 != 0){
         cout << number1 << " / " << number2 << "=" << number1 / number2;
       }else{
         cout << "Error : Division by zero!";
       }
       
       break;
       default:
         cout << "Error: Invalid operator!";
  }
  return 0;
}