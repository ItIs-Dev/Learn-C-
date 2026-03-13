#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("DAUVAO.INP", "r", stdin);
    freopen("DAURA.OUT", "w", stdout);

    long long soNguyen;
    cin >> soNguyen;

    const int MAXN = 100000;

    long long a[MAXN];
    pair<int,int> ds[MAXN];

    long long ptds = 0;

    for(int i = 0; i < soNguyen; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < soNguyen; i++) {
        int j = i + 1;
        while(j < soNguyen) {
            if(((a[i] + a[j]) % 3) == 0) {
                ds[ptds] = {i, j};
                ptds++;
            }
            j++;
        }
    }

    cout << "Các số có thể chia hết cho 3 là: ";
    for(int i = 0; i < ptds; i++) {
        cout << "(" << ds[i].first << ", " << ds[i].second << ") ";
    }
}
