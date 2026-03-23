#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a, b;
    a = 0;
    b = 1;

    for(int i=0; i<N; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}
