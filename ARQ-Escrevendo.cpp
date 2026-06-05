#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    cin >> name;
    float numeros;
    int N = 0;
    ofstream arquivo;
    arquivo.open(name, ofstream::out);
    while(true){
        cin >> numeros;
        if(numeros == 0){
            break;
        }
        arquivo << numeros << endl;
    }
    arquivo.close();
    ifstream ler;
    ler.open(name, ifstream::in);
    while(ler >> numeros){
        cout << fixed << setprecision(2);
        cout << numeros << " ";
    }
    ler.close();
    return 0;
    
}
