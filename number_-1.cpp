#include <iostream>
using namespace std;
int isPositive(int number )
   {
       if (number > 0)
       {
           return 1;
       }
       else if (number < 0)
       {
        return -1;
       }
       else 
       {
        return 0;
       }
   }
int main()
   { 
      
    int x;
      for (int i = 0; i < 3; i++){
    cout << "Enter a number :";
    cin >> x;

  int result = isPositive(x);
  cout << "Result is :" << result << endl;
      }
      return 0;
   }