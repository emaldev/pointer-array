#include <iostream>
using namespace std;

 double calculteAree(double radius)
    {
        double pi = 3.14;
           radius * radius;
        return pi * radius * radius;
    }
int main()
    {
        double r;
        cout << "Enter the radius of the circle:";
        cin >> r;

        double area = calculteAree(r);
        cout << "The area is :" << area << endl; 

        return 0;

    }