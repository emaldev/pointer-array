#include <iostream>
using namespace std;
  
void swapNumbers(int &a , int &b)
{  
   int temp;
   a = temp;
   a = b;
   b = temp;
   ;
}
int main()
  {     int x  , y;
       
       cout << "Enter tow number " << endl;
       cin >> x >> y;
        swapNumbers(x , y);
       cout << "swap number is :" << x << y << endl;
       return 0;
  }