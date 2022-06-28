#include <bits/stdc++.h>
using namespace std;

int main(){
    double M, N;
    cin >> M >> N;

    double ans = M;

    for(int i = 0; i < N; i++){
        ans = (ans * 2) + (ans + 1) + 0;
        ans /= 3;
    }
    cout << ans << endl;
}