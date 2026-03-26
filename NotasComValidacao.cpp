#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float nota;
    int N = 0;
    int x = 1;
    
    while(x == 1){
        
        float i = 0;
    
    while(N < 2){
        cin >> nota;
        if( nota >= 0 && nota <= 10){
            i += nota;
            N++;
        }
        else{
            cout << "nota invalida\n";
        }
    }
    cout << fixed << setprecision(2);
    cout << "media = " << i/2 << endl;
    cout << "novo calculo (1-sim 2-nao)\n";
    cin >> x;
    if (x != 1 && x != 2){
        while(x != 1 && x != 2){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
        }
    }
    else if(x == 2){
        return 0;
    }
    N = 0;
    i = 0;
    
    }
}
