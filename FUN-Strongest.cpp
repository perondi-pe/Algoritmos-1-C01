#include <iostream>
using namespace std;

struct dados
{
    string nome;
    int n1;
    int n2;
    int n3;
    int n4; 
};

int strongest(dados atletas[], int nAtletas){
    int pontos[100];
    int base = 0;
    int vencedor;
    for(int i = 0; i < nAtletas; i++){
        pontos[i] = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
    }
    for(int i = 0; i < nAtletas; i++){
        if(pontos[i] > base){
            base = pontos[i];
            vencedor = i;
        }
    }
    return vencedor;
}

int main(){
    int nAtletas;
    cin >> nAtletas;
    dados atletas[100];
    for(int i = 0; i < nAtletas; i++){
        getline(cin >> ws, atletas[i].nome);
        cin >> atletas[i].n1;
        cin >> atletas[i].n2;
        cin >> atletas[i].n3;
        cin >> atletas[i].n4;
    }
    int vencedor = strongest(atletas, nAtletas);
    cout << "Vencedor: " << atletas[vencedor].nome << endl;
    return 0;
}
