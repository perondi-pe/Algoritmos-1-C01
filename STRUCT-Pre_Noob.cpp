#include <iostream>
#include <iomanip>
using namespace std;

struct dados{
    int matricula;
    float nota1;
    float nota2;
};

int main(){
    dados aluno;
    cin >> aluno.matricula >> aluno.nota1 >> aluno.nota2;

    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2);
    cout << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << "Nota da segunda prova: " << aluno.nota2 << endl;
}
