#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n number :";
      cin >> n;
    int *arr = new int[n];
    int *p = arr;
    for(int i = 0; i < n; i++){
        cin >> *(p + i);
    }
    int *maxptr = p;

    for(int i = 0; i < n; i++){
        if (*(p + i)  > *maxptr )
        maxptr = (p + i);
    }
    cout << "Max value:" << *maxptr << endl;
    cout << "Address :" << maxptr << endl;
    delete[] arr;
    
    return 0;

}