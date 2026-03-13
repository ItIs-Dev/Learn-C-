#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// 5 5 4 2 4 3
int main() {
    freopen("DAUVAO.INP", "r", stdin);
    freopen("DAURA.OUT", "w", stdout);

    long long dayso[6];
    long long a = 0;

    while(cin >> dayso[a]) a++;

    long long sonho = 10;
    long long soPT = sizeof(dayso) / sizeof(dayso[0]);
    for(int i = 0; i < soPT - 1; i++) {
        if(sonho >= dayso[i]) sonho = dayso[i] - 1;
    }

    /*for(int ad: dayso) {
        cout << ad << " ";
    }*/
    cout << sonho;

    return 0;
}
