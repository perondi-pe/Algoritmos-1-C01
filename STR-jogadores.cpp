#include <iostream>
#include <string>

using namespace std;

int main(){
    
int N;
cin >> N;
cin.ignore();
bool encontrou = false;

string name;

int y = 0;

for(int i = 0; i < N; i++){
    getline(cin, name);
    cin >> y;
    cin.ignore();
    if(y >= 18){
        cout << name << " " << y << endl;
        encontrou = true;
}
}
    if(!encontrou){
        cout << "Nenhum jogador com 18 anos ou mais\n";
    }
}
