#include <iostream> //biblioteca para ter uma tela
#include <cmath> //biblioteca para usar raiz, potencia e etc
#include <iomanip> //biblioteca para usar setpreciion
using namespace std;

int main(){
    double x1; //cordenada x do primeiro circulo
    double y1; //cordenada y do primeiro circulo
    double r1; //raio do primeiro circulo

    double x2; //cordenada x do segundo circulo
    double y2; //cordenada y do segundo circulo
    double r2; //raio do segundo circulo

    double R; //raio maior circulo
    double r; //raio menor circulo

    cin >> x1 >> y1 >> r1; //dados do primeiro circulo
    cin >> x2 >> y2 >> r2; //dados do segundo circulo

    double d; //distancia entre os centros dos circulos
    double A; //area da intersecção
    double P1; //parte da formula para facilitar
   double P2;
    double raiz; //raiz do final da formula para facilitar

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); //calculo para descobrir a distancia

    if(d >= r1 + r2) //condiçoes para a intersecção ser 0
    cout << "0\n"; //imprime interceção 0 na tela
   else{
        if(r1 > r2){ // if para descobrir o raio maior e menor
            R = r1;
            r = r2;
      }
      else{
            R = r2;
            r = r1;
      }
        P1 = (pow(d, 2) + pow(r, 2) - pow(R, 2)) / (2 * d * r);
        P2 = (pow(d, 2) + pow(R, 2) - pow(r, 2)) / (2 * d * R);
        raiz = sqrt((-d + r1 + r2)*(d + r1 - r2)*(d - r1 + r2)*(d + r1 + r2)); // raiz no final da formula
        A = pow(r, 2) *acos(P1) + pow(R, 2) * acos(P2) - 0.5 * raiz;
      cout << fixed << setprecision(2);
      cout << A << "\n";
   }
}