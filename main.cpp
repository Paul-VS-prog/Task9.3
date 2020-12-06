#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a[9][9];
    cout << "¬ведите элементы матрицы: ";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }
    int r = 0, l = 8, k = 0, s = 0;
    for (int j = 0; j < 9; j++) {
        for (int i = r; i <= l; i++) {
            s += a[j][i];
        }
        if (r == l) {
            k = 1;
            r--;
            l++;
        }
        else if (k == 0) {
            r++;
            l--;
        }
        else {
            r--;
            l++;
        }
    }
    cout << s;
}
