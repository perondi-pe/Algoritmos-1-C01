#include <iostream>
#include <iomanip>

using namespace std;

int nAbaixo(int notas[], int nAlunos, float media){
    int s = 0;
    for(int i = 0; i < nAlunos; i++){
        if(notas[i] < media){
            s++;
        }
    }
    return s;
}

int nAcima(int notas[], int nAlunos, float media){
    int s = 0;
    for(int i = 0; i < nAlunos; i++){
        if(notas[i] >= media){
            s++;
        }
    }
    return s;
}

int main(){
    int nAlunos;
    cin >> nAlunos;
    int notas[100];
    float media = 0;
    for(int i = 0; i < nAlunos; i++){
        cin >> notas[i];
        media += notas[i];
    }
    media = media / nAlunos;
    int a = nAcima(notas, nAlunos, media);
    int b = nAbaixo(notas, nAlunos, media);
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media << endl;
    cout << "Alunos com nota abaixo da media: " << b << endl;
    cout << "Alunos com nota acima da media: " << a << endl;
    return 0;

}
