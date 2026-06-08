#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat1[100][100];
    int mat2[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat1[i][j];
        }
        cin.ignore();
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat2[i][j];
        }
        cin.ignore();
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << mat1[i][j] + mat2[i][j] << " ";
        }
        cout << endl;
    }
}
