#include <iostream>
using namespace std;

int main() {
    int digitos[10][15] = {
        {0,0,0, 0,1,0, 0,1,0, 0,1,0, 0,0,0}, // 0
        {1,1,0, 1,1,0, 1,1,0, 1,1,0, 1,1,0}, // 1
        {0,0,0, 1,1,0, 0,0,0, 0,1,1, 0,0,0}, // 2
        {0,0,0, 1,1,0, 0,0,0, 1,1,0, 0,0,0}, // 3
        {0,1,0, 0,1,0, 0,0,0, 1,1,0, 1,1,0}, // 4
        {0,0,0, 0,1,1, 0,0,0, 1,1,0, 0,0,0}, // 5
        {0,0,0, 0,1,1, 0,0,0, 0,1,0, 0,0,0}, // 6
        {0,0,0, 1,1,0, 1,1,0, 1,1,0, 1,1,0}, // 7
        {0,0,0, 0,1,0, 0,0,0, 0,1,0, 0,0,0}, // 8
        {0,0,0, 0,1,0, 0,0,0, 1,1,0, 1,1,0}  // 9
    };

    int entrada[15];

    while (true) {
        bool fim = true;

        for (int i = 0; i < 15; i++) {
            cin >> entrada[i];

            if (entrada[i] != 0)
                fim = false;
        }

        if (fim)
            break;

        for (int d = 0; d < 10; d++) {
            bool igual = true;

            for (int i = 0; i < 15; i++) {
                if (entrada[i] != digitos[d][i]) {
                    igual = false;
                    break;
                }
            }

            if (igual) {
                switch (d) {
                    case 0: cout << "ZERO" << endl; break;
                    case 1: cout << "UM" << endl; break;
                    case 2: cout << "DOIS" << endl; break;
                    case 3: cout << "TRES" << endl; break;
                    case 4: cout << "QUATRO" << endl; break;
                    case 5: cout << "CINCO" << endl; break;
                    case 6: cout << "SEIS" << endl; break;
                    case 7: cout << "SETE" << endl; break;
                    case 8: cout << "OITO" << endl; break;
                    case 9: cout << "NOVE" << endl; break;
                }
                break;
            }
        }
    }

    return 0;
}
