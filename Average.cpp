#include <iostream>
using namespace std;

float AverageNum(int a, int b, int c){
       return float  (a + b + c) / 3;
}
int main(){
     int x , y , z;
     cout << "Please Enter three number " << endl;
     cin >> x >> y >> z;

     float average = AverageNum(x, y, z);
     cout << average << endl;
     return 0;
}