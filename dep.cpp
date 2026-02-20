#include <iostream>
using namespace std;

int main() {
    // آرایه دو بعدی
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // چاپ با ایندکس
    cout << "با ایندکس:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // چاپ با پوینتر
    cout << "\nبا پوینتر:" << endl;
    int* p = &matrix[0][0];
    for(int i = 0; i < 6; i++) {
        cout << *(p + i) << " ";
        if((i+1) % 3 == 0) cout << endl;
    }
    
    // جمع عناصر
    int sum = 0;
    p = &matrix[0][0];
    for(int i = 0; i < 6; i++) {
        sum += *(p + i);
    }
    cout << "\nجمع عناصر: " << sum << endl;
    
    return 0;
}