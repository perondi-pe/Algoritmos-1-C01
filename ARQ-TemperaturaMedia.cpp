#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    ifstream arquivo;
    string name;
    float temperatura;
    float soma;
    int contador = 0;
    cin >> name;
    arquivo.open(name, ifstream::in);
    while(arquivo >> temperatura){
        soma += temperatura;
        contador++;
    }
    arquivo.close();
    cout << fixed << setprecision(1);
    cout << "Temperatura media: " << soma / contador << " graus" << endl;
    return 0;
}
