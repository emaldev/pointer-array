#include <iostream>
using namespace std;

int main(){
    cout << " <:::> Welcom me calclator <:::>" << endl;
    cout << "Enter to number  " << endl;
    int op;
    int number1, number2;
    cin >> number1 >> number2;
    cout << "Enter operator : >";
    cin >> op;

    switch(op){
        case '+' :
           cout << number1 + number2;
           break;
        case '*':
           cout << number1 * number2;
           break;
        case '-':
           cout << number1 - number2;
           break;
        case '/' :
           cout << number1 / number2;
           break;

        default:
        cout<<"finishid";
        

    }
    return 0;
}