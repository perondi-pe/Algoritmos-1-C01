#include <iostream>
#include <iomanip>

using namespace std;

double calcularAreaCirculo(double raio){
    double area, pi = 3.14159;
    area = pi * raio * raio;
    return area;
}

double calcularAreaRetangulo(double base, double altura){
    float area;
    area = base * altura;
    return area;
}

double calcularAreaTriangulo(double base, double altura){
    float area;
    area = (base * altura)/2;
    return area;
}

int main(){
    double h, b ,r;
    double Ac, Ar, At;
    string tipo;
    cout << fixed << setprecision(2);
    while(true){
        cin >> tipo;
        if(tipo == "fim"){
            break;
        }
        else if(tipo == "circulo"){
            cin >> r;
            Ac = calcularAreaCirculo(r);
            cout << "area = " << Ac << endl;
        }
        else if(tipo == "triangulo"){
            cin >> b >> h;
            At = calcularAreaTriangulo(b, h);
            cout << "area = " << At << endl;
        }
        else{
            cin >> b >> h;
            Ar = calcularAreaRetangulo(b, h);
            cout << "area = " << Ar << endl;
        }
    }
    return 0;
}
