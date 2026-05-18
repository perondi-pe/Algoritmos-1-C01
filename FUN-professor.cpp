#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int Alunos){
    float s = 0;
    for(int i = 0; i < Alunos; i++){
        s += notas[i];
    }
    s = s / Alunos;
    return s;
}

int main(){
    int Alunos;
    cin >> Alunos;
    int notas[100];
    for(int i = 0; i < Alunos; i++){
        cin >> notas[i];
    }
    float m = media(notas, Alunos);
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << m << endl;
    return 0;
}
