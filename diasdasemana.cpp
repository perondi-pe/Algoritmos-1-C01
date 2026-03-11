#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int d, m, a;
    cin >> d >> m >> a;
    double g, f, n;
    int delta;

    if(m <= 2){
    g = a -1;
    f = m + 13;
    }
    else{
    f = m + 1;
    g = a;
    }

    n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

    if(n < 36523)
    delta = 2;
    else if((n >= 36523) && (n < 73048))
    delta = 1;
    else if (n >= 73048)
    delta = 0;

    double frac = ((double)n / 7) - (int)((double)n / 7);
    int ds = round(frac * 7) + delta + 1;

    switch(ds){
        case 1: cout << "domingo\n"; break;
        case 2: cout << "segunda-feira\n"; break;
        case 3: cout << "terca-feira\n"; break;
        case 4: cout << "quarta-feira\n"; break;
        case 5: cout << "quinta-feira\n"; break;
        case 6: cout << "sexta-feira\n"; break;
        case 7: cout << "sabado\n"; break;
    }
    return 0;
}
