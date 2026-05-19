#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2){
    float delta = pow(b, 2) - 4 * a * c;
    if(delta < 0 || a == 0){
        return 1;
    }
    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);
    return 0;
}

int main(){
    float a, b, c, x1, x2;
    cin >> a >> b >> c;
    cout << fixed << setprecision(5);
    if(calc_raizes(a, b, c, x1, x2) == 1){
        cout << "Impossivel calcular" << endl;
    }
    else{
        if(x1 == x2){
            cout << "x = " << x1 << endl;
        }
        else{
            if(x1 < x2){
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
            else{
                cout << "x1 = " << x2 << endl;
                cout << "x2 = " << x1 << endl;
            }
        }
    }
}
