#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   double salario, recalculo, final, final2;
   double re2, r3;
   cin >> salario;

   if((salario > 0) && (salario <= 2000.00)){
      cout << "Isento" << endl;
   }
   else if ((salario >= 2000.01) && (salario < 3000.00)){
      recalculo = salario - 2000.00;
      final = (recalculo * 8) / 100;
      cout << fixed << setprecision(2);
      cout << "R$ " << final << endl;
   }
   else if ((salario >= 3000.01) && (salario < 4500.00)){
      recalculo = 1000.00;
      re2 = (salario - 2000.00) - recalculo;
      final = (recalculo * 0.08) + (re2 * 0.18);
      cout << fixed << setprecision(2);
      cout << "R$ " << final << endl;
   }
   else if (salario > 4500.00){
      recalculo = 1000.00;
      re2 = 1500.00;
      final = (recalculo * 0.08) + (re2 * 0.18);
      r3 = salario - 4500.00;
      final2 = final + (r3 * 0.28);
      cout << fixed << setprecision(2);
      cout << "R$ " << final2 << endl;
   }
}