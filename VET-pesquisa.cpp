#include <iostream>
using namespace std;

int main(){
    int numero[500];
    int X;
    int i = 0;
    
    cin >> numero[i];

    while(numero[i] != 0){
        i++;
        cin >> numero[i];
    }

    int tamanho = i;

    cin >> X;

    for(int j = 0; j < tamanho; j++){
        if(X == numero[j]){
            cout << "Elemento " << X << " encontrado na posicao " << j << endl;
        return 0;
        }
    }

    cout << "Elemento " << X << " nao foi encontrado" << endl;
    
    return 0;
}
