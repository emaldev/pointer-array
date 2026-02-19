#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter n number: ";
    cin >> n;
    int arr[n];
    int *p = arr;

    for (int i = 0; i < n; i++){
        cin >> *(p + i);
    }
    
    int *maxp = p;
    for(int i = 0; i < n; i++){
        if(*(p + i) > *maxp){
            maxp = p + i;
        }
    }
    int *secondMax = nullptr;
    for(int i = 0; i < n; i++){
        if((p + i) != maxp){
            if(secondMax == nullptr || *(p + i) > *secondMax){
                secondMax = p + i;
            }
        }
    }
    cout << "Max array :>" << *maxp << "Address of max:" << maxp << endl;
    if(secondMax != nullptr)
    cout << "second max array is :" << *secondMax << "Address" << secondMax << endl;
     else 
     cout << "no second max (all elements equal)" << endl;

     return 0;
}