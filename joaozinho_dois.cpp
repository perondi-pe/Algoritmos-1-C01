#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int X[100];
    int Y[100];
    int N;
    char Op[100];
    float resultado;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }
    for(int j = 0; j < N; j++){
        cin >> Y[j];
    }
    for(int v = 0; v < N; v++){
        cin >> Op[v];
    }
    int k = 0;
    for(int z = 0; z < N; z++){
        if(Op[k] == '*'){
            resultado = X[k] * Y[k];
            cout << X[k] << " " << Op[k] << " " << Y[k] << " = " << resultado << endl;
        }
         else if(Op[k] == '-'){
            resultado = X[k] - Y[k];
            cout << X[k] << " " << Op[k] << " " << Y[k] << " = " << resultado << endl;
        }
        else if(Op[k] == '+'){
            resultado = X[k] + Y[k];
            cout << X[k] << " " << Op[k] << " " << Y[k] << " = " << resultado << endl;
        }
        else{
            resultado = (float)X[k] / (float)Y[k];
            cout << fixed << setprecision(2);
            cout << X[k] << " " << Op[k] << " " << Y[k] << " = " << resultado << endl;
        }
        cout << fixed << setprecision(0);
        k++;
        
    }
}
