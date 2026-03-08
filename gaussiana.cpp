#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   double x, media, desvioPadrao;
   double pi, diferenca, diferencaQuadrado;
   double variancia, doisVariancia;
   double expoente, valorExp;
   double parteDenominador, raizDenominador;
   double parteFracao, resultado;

   cin >> x >> media >> desvioPadrao;

   pi = 3.14159;

   diferenca = x - media;
   diferencaQuadrado = pow(diferenca, 2);

   variancia = pow(desvioPadrao, 2);
   doisVariancia = 2 * variancia;

   expoente = diferencaQuadrado / doisVariancia;
   valorExp = exp(-expoente);

   parteDenominador = 2 * pi * variancia;
   raizDenominador = sqrt(parteDenominador);

   parteFracao = 1 / raizDenominador;

   resultado = parteFracao * valorExp;

   cout << fixed << setprecision(4);
   cout << resultado << endl;

   return 0;
}