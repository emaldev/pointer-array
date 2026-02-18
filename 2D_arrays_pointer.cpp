#include <iostream>

using namespace std;
int main(){
    int rows, cols;
    cout << "Enter rows and cols:";
    cin >> rows >> cols;
    int *matrix = new int[rows * cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> *(matrix + i *cols + j);
        }
    }

    cout << "\n Maxtrix : \n";

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << *(matrix + i*cols + j) << " ";
        }
        cout << endl;
    }
    delete[] matrix;
    return 0;
}
