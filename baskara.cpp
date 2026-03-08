#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
   double a, b ,c;
   double delta, x1, x2;
   cin >> a >> b >> c;
   delta = b*b - 4*a*c;
   if ( a == 0 || delta < 0){
      cout << "Impossivel calcular" << endl;
   }
   else{
      double raizdelta = sqrt(delta);
      x1 = (-b + raizdelta) / (2*a);
      x2 = (-b - raizdelta) / (2*a);
      cout << fixed << setprecision(5);
      cout << "R1 = " << x1 << "\n" << "R2 = " << x2 << endl;
   }

   return 0;
}