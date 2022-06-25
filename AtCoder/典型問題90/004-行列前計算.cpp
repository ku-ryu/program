#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<vector<int>> data(2009, vector<int>(2009)), ans(2009, vector<int>(2009));
    vector<int> row(2009);
    vector<int> column(2009);
    

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cin >> data[i][j];
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            row[i] += data[i][j];
            column[j] += data[i][j];
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++){
            ans[i][j] = row[i] + column[j] - data[i][j];
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++){
            if(j >= 2) printf(" ");
            printf("%d", ans[i][j]);
        }
        printf("\n");
    }
}