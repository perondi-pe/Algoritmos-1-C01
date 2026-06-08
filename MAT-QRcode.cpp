#include <iostream>
using namespace std;

int main() {
    int qr[3][3];
    int masculino[3][3] = {
        {1, 1, 1},
        {0, 1, 0},
        {0, 0, 1}
    };

    bool igual = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> qr[i][j];

            if (qr[i][j] != masculino[i][j]) {
                igual = false;
            }
        }
    }

    if (igual)
        cout << "MASCULINO" << endl;
    else
        cout << "FEMININO" << endl;

    return 0;
}
