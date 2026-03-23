#include <iostream>
using namespace std;

int main() {

    int N;
    int votos;

    cin >> votos;

    int like = 0;
    int deslike = 0;

    for (int i = 0; i < votos; i++) {
        cin >> N;
        if (N == 1) {
            like++;
        }
        if (N == -1) {
            deslike++;
        }
    }

    if(like > deslike) {
        cout << "A maioria gostou" << endl;
    } else if (like < deslike) {
        cout << "A maioria nao gostou" << endl;
    } else {
        cout << "Deu empate" << endl;
    }

    return 0;

}
