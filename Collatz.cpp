#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int i, j;
    cin >> i >> j;
    int contador = 1;
    int temp = 0;
    int inicio, fim;
    
    if(i < j){
        inicio = i;
        fim = j;
    }
    else{
        inicio = j;
        fim = i;
    }
    
    for(int n = inicio; n <= fim; n++){
        
        int aux = n;
        
        while( aux != 1){
            contador++;
            if( aux % 2 == 0){
                aux = aux/2;
            }
            else{
                aux = aux * 3 + 1;
            }
        }
        
        if(contador > temp){
            
            temp = contador;
            
        }
        
        contador = 1;
        
    }
    
    cout << i << " " << j << " " <<  temp;
    
}
