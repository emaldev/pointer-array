
#include <iostream>
using namespace std;

    class Car
      {
        public:
          void beep()
            {
                cout << "Beeeeep" << endl;
            }
      };
   int main()
      {
         Car c1;
         Car c2;
         Car c3;
         Car c4;

         c1.beep();
       return 0;
      }
