#include <iostream>
using namespace std;
  
 void checkAge(int age){
    if(age >= 18)
    cout << "you are eligible for a licese." << endl;
    else
    cout << "yout are too young (child)l" << endl;
  
 }

 
int main()
   {
   
    int sen;
     cout << "Plese enter your age :";
    cin >> sen;
     
    checkAge(sen);
   
    return 0;

   }