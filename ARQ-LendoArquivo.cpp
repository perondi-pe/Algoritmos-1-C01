#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arquivo;
    string linha;
    string name;
    cin >> name;
    arquivo.open(name, ifstream::in);
    while(getline(arquivo, linha)){
        cout << linha << endl;
    }
    arquivo.close();
    return 0;
}
