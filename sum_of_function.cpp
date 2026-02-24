#include <iostream>

using namespace std;
void showMenu(){
    cout << "\n ========== Calc Calculator ========"<< endl;
    cout << "1. sum (+)" << endl;
    cout << "2.subtract (-)" << endl;
    cout << "3. multiply(*)" << endl;
    cout << "4. divide (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "=======================================" << endl;
    cout << "Your chose :";
}
int add(int a , int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a , int b){
    return a * b;
}
float divide(int a , int b){
    if(b == 0){
        cout << "Error: Connot divide by zero!" << endl;
        return 0;
    }
    return (float)a / b;
}
int main()
{      
    
      int choice;
      do{
        showMenu();
        cin >> choice;
   
      int a, b;
      

      if(choice >= 1 && choice <= 4){
        cout << "first number :";
        cin >> a ;
        cout << "second number : ";
        cin >> b;
      }
      switch(choice){
        case 1 :
           cout << "sum number is  :" << add(a, b) << endl;
           break;
        case 2 :
           cout << "subtract number is :" << subtract(a, b) << endl;
           break;
        case 3 :
          cout  << "Multiply number is :" << multiply(a, b) << endl;
          break;

        case 4 :
          cout  << "divide number is : "<< divide(a , b) << endl;
          break;
        case 5 :
          cout <<" boy boy my frind  " << endl;
          break;
        default:
          cout << "number is Error !" << endl;
            
      }
      cout << endl;
    } while (choice != 5);

     return 0;
}