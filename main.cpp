#include <bits/stdc++.h>
using namespace std;

void tam_giac_vuong_ben_phai() {
    string str = "";
    long long size;
    string space = "";
    cout << "Nhập độ lớn hình tam giác vuông bên phải: ";
    do {
        cin >> size;
        if (size >= 100000 and size <= 0) cout << "Nhập lại vì số quá lớn hoặc quá nhỏ!" << endl << "Nhập độ lớn hình tam giác vuông:";
    } while (size >= 100000 and size <= 0);

    for (int i = 0; i < size; i++) space += " ";

    for (int i = 1; i < size; i++) {
        str += "*";
        cout << space<<str << endl;
        space.erase(space.length() - 1);
    }
}

void tam_giac_vuong_ben_trai() {
    string str = "";
    long long size;
    cout << "Nhập độ lớn hình tam giác vuông bên trái: ";
    do {
        cin >> size;
        if (size >= 100000 and size <= 0) cout << "Nhập lại vì số quá lớn hoặc quá nhỏ!" << endl << "Nhập độ lớn hình tam giác vuông:";
    } while (size >= 100000 and size <= 0);

    for (int i = 1; i < size; i++) {
        str += "*";
        cout << str << endl;
    }
}

void tam_giac_can() {
    string str = "";
    long long size;
    string space = "";
    cout << "Nhập độ lớn hình tam giác: ";
    do {
        cin >> size;
        if (size >= 100000 and size <= 0) cout << "Nhập lại vì số quá lớn hoặc quá nhỏ!" << endl << "Nhập độ lớn hình tam giác vuông:";
    } while (size >= 100000 and size <= 0);

    for (int i = 0; i < size; i++) space += " ";

    for (int i = 1; i < size; i++) {
        if (i == 1) {
            str += "*";
        }else {
            str += "**";
        }
        cout << space<<str << endl;
        space.erase(space.length() - 1);
    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int type;
    string loai_hinh_tam_giac[] = {
        "1. Tam Giac Vuong",
        "2. Tam Giac Can"
    };

    cout << "Chọn loại hình tam giác:" << endl;
    for (auto hinh_tam_giac: loai_hinh_tam_giac) {
        cout << hinh_tam_giac << endl;
    }
    cout << "Nhập loại hình tam giác bạn muốn chọn, nhập số: ";
    cin >> type;
    switch (type) {
        case 1:
            cout << "Chọn bên vuông trái/phải, trái = 1 phải = 2: " << endl;
            cin >> type;
            switch (type) {
                case 1:
                    tam_giac_vuong_ben_trai();
                    break;
                case 2:
                    tam_giac_vuong_ben_phai();
                    break;
                default:
                    tam_giac_vuong_ben_trai();
                    break;
            }
            break;
        case 2:
            tam_giac_can();
            break;
    }
    return 0;
}