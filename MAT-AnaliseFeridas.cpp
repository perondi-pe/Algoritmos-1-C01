#include <iostream>
using namespace std;

int main() {
    int N, M, lado;
    cin >> N >> M >> lado;

    int valor;
    int pixelsFerida = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> valor;

            if (valor == 1)
                pixelsFerida++;
        }
    }

    int area = pixelsFerida * lado * lado;

    cout << "AREA = " << area << " mm^2" << endl;

    return 0;
}
