#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K){
    C = 5/9.0 * (F - 32);
    K = C + 273;
}

int main(){
    float F;
    cin >> F;
    float C = 0, K = 0;
    converte(F, C, K);
    cout << fixed << setprecision(2);
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;
    return 0;
}
