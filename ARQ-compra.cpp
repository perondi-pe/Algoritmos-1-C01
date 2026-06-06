#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct dados
{
    string produto;
    float preco;
};

int main(){
    dados compra;
    string name;
    cin >> name;
    string tipo;
    int quantidade;
    cin >> tipo;
    cin >> quantidade;
    float total = 0;
    
    ifstream arquivo;
    arquivo.open(name, ifstream::in);
    while(getline(arquivo, compra.produto)){
        if(compra.produto == tipo){
            arquivo >> compra.preco;
            total = compra.preco * quantidade;
            break;
        }
        arquivo >> compra.preco;
        arquivo.ignore();
    }
    arquivo.close();
    cout << fixed << setprecision(2);
    cout << "R$ " << total << endl;
    return 0;
}
