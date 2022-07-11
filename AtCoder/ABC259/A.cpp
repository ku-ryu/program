#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, X, T, D;
    //今N歳 M歳の時の身長は？ XからN歳まで伸びてない 今T[cm] 毎年D[cm]

    cin >> N >> M >> X >> T >> D;

    int ans = 0;

    if(M >= X){
        ans = T;
    } else {
        ans = T - ((X - M) * D);
    }

    cout << ans << endl;

}