#include <iostream>

using namespace std;

 void showWelcomeMessage()
 
  { 
    cout << "<::+++++++++++++++++++++++++++++++++++++::>" << endl;
    cout << "Welcome to me cafee"<< endl;
    cout << "tea or caffee" << endl;
    cout << "Good night " << endl;
    cout << "<:: ====================================== ::>" << endl;

}
int addNumbers(int a , int b )
 { 
    return a + b;
 }
 void checkAge( int age)
{
    cout << "Enter your age :";
    if(age > 18)
     { 
        cout << "<:: ======================================== ::>" << endl;
       cout << "Your " << age <<"years old. Drink Milk!" << endl;
     }else {
        cout << "Your " << age << "years old . Drink Coffee!" << endl;
     }
      cout << "<:: ============================================ ::>" << endl;
}
 void printMultiplicationTable(int n) {
    cout << "======= Multiplication Table of " << n << " =======" << endl;
    for (int i = 1; i <= 5; i++) {
        int result = i * n;
        // استفاده از \t برای ایجاد فاصله منظم (Tab)
        cout << "| " << n << " * " << i << " = " << result << "\t|" << endl;
    }
    cout << "========================================" << endl;
}
      
    

   
int main()
   {  
    showWelcomeMessage();
    int x , y;
    cout << "Enter tow number "<< endl;

    cin >> x >> y;
     int sum = addNumbers(x, y);
     cout << "Sum is :" << sum << endl;

     printMultiplicationTable(x);

     checkAge(y);



     return 0;


   }