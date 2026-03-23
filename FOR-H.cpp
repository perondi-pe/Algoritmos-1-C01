#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double H = 0.0;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
    H += 1.0/i;

}
    cout << fixed << setprecision(4);
    cout << H <<'\n';
}
