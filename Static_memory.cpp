#include <iostream>

using namespace std;

int main()
{
    cout << "Enter array size :"; 
    int sum = 0;
    int arr[3][3];
    int (*ptr)[3] = arr;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> *(*(ptr + i) + j);
        }
    }
      int max = ptr[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(ptr[i][j] > max) 
            max = ptr[i][j];
            sum += *(*(ptr + i) + j );
            
        }
    }

    cout <<"Sum :" << sum << endl;
    cout <<"Max :" << max << endl;
    

    return 0;
}