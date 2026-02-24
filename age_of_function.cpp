#include <iostream>
using namespace std;

    void checkAge(int age)
      {
        if(age >= 18){
            cout << "your age is oK!" << endl;
        }else{
            cout << "your age is not ok You are child" << endl;
        }
      }
int main() 
   {
         int age;
         cout << "Please Enter yout age :>";
         cin >> age;
         checkAge(age);
         return 0;
   }