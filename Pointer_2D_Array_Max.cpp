#include <iostream>

using namespace std;

int main(){
    int arr[2][2];
    int (*p)[2] = arr;

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> *(*(p + i) + j);
        }
    }

    cout << " \n array \n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << *(*(p + i) + j) << "  ";
        }
        cout << endl;
    }
}