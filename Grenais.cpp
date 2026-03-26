#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int inter, gre;
    int vi = 0;
    int vg = 0;
    int empate = 0;
    int grenal = 0;
    while( x == 1){
        cin >> inter >> gre;
        grenal ++;
        if(inter > gre){
            vi++;
        }
        else if( gre > inter){
            vg++;
        }
        else{
            empate++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> x;
    }
    while (x == 2){
        cout << grenal << " grenais" << endl;
        cout << "Inter:" << vi << endl;
        cout << "Gremio:" << vg << endl;
        cout << "Empates:" << empate << endl;
        if(vi > vg){
            cout << "Inter venceu mais" << endl;
        }
        else if(vi < vg){
            cout << "Gremio venceu mais" << endl;
        }
        else{
            cout << "Nao houve vencedor" << endl;
        }
        x = 0;
    }
}
