#include <iostream>
using namespace std;

int sumNumber(int x , int y){
    return x + y;
}
int main(){
 int a , b;
 cout << "Enter tow numbet : ";
 cin >> a >> b;
 int result = sumNumber(a, b);
cout << "Sum  is : " << result << endl;

return 0;

}