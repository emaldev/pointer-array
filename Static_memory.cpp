#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int arr[3][3];
    int (*ptr)[3] = arr;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> *(*(ptr + i) + j);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum += *(*(ptr + i) + j );
        }
    }

    cout << sum;

    return 0;
}