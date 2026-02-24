
#include <iostream>
//5!= 5 * 4 * 3 * 2 * 1 factorial 
using namespace std;
long factorial (int x )
{
    if (x > 1)
    return (x * factorial(x - 1));
    if(x < 1)
    cout << "Eroor this number is manfi "<< endl;
      else
       return 1;
}
int main()
{  int a;
   long result = 0;
   for (int i = 0; i < 3; i++){
    cout << "Plearse enter a number " << endl;
    cin >> a;
    result = factorial(a);
    cout << "result is :" << result  << endl;
   }
       
}