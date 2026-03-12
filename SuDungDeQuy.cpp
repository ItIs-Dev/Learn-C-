#include <bits/stdc++.h>

using namespace std;

// 3
// 1 2 3 4 8 7 9 1 0 4 3 5 6 10 11

void hamDeQuy(int mang[], int soPT, int start, int df[], int cc) {

    if(start > cc - soPT) return;

    int a = start + soPT;
    int solon = 0;

    int i = start; // dùng biến phụ để không phá start

    while(i < a) {
        if(mang[i] > solon) solon = mang[i];
        i++;
    }

    df[start] = solon;
    cout << solon << " ";

    hamDeQuy(mang, soPT, start + 1, df, cc); // trượt qua 1 phần tử
}

int Huy(){
    freopen("DAUVAO.INP", "r", stdin);
    freopen("DAURA.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;

    int a[n];
    multiset<int> s;

    for(int &x : a){
        cin >> x;
    }

    for(int i = 0; i < k; i++){
        s.insert(a[i]);
    }

    for(int i = k; i < n; i++){
        cout << *s.rbegin() << " ";
        s.erase(s.find(a[i - k]));
        s.insert(a[i]);
    }

    cout << *s.rbegin();
    return 0;
}

int main()
{
    //Huy();
    freopen("DAUVAO.INP", "r", stdin);
    freopen("DAURA.OUT", "w", stdout);

    int sophantu_dscon;
    int danhsach[100];
    int df[100];

    cin >> sophantu_dscon;

    int n = 0;
    while(cin >> danhsach[n]) {
        n++;
    }

    int cc = n;

    hamDeQuy(danhsach, sophantu_dscon, 0, df, cc);

    return 0;
}
