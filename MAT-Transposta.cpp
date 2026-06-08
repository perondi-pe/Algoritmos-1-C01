#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double M[2][2];

    // Leitura da matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> M[i][j];
        }
    }

    // Determinante
    double det = M[0][0] * M[1][1] - M[0][1] * M[1][0];

    cout << fixed << setprecision(4);

    cout << "M = ["
         << M[0][0] << " " << M[0][1]
         << " ; "
         << M[1][0] << " " << M[1][1]
         << "]" << endl;

    cout << "Determinante de M = " << det << endl;

    cout << "Transposta de M = ["
         << M[0][0] << " " << M[1][0]
         << " ; "
         << M[0][1] << " " << M[1][1]
         << "]" << endl;

    return 0;
}
