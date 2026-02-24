#include <iostream>
#include <string>
 using namespace std;

void Welcome()
   {
    cout << "Hello ";
    cout << "Welcome to C++ programming " << endl;

   }
   int multiply(int a, int b)
   { 
    return a * b;
   }
int main()
    {   
        Welcome(); 
        int a, b;
        cout << "Please Enter tow number " << endl;
        cin >> a >> b;
        
       int result = multiply(a, b);
       cout << "divide number is " << result << endl;
        
        return 0;

    }