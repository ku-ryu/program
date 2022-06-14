#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int ans = 1;
  cin >> S;

    // ここにプログラムを追記
    for (int i = 1; i < S.size(); i += 2) {
        if(S.at(i) == '+'){
            ans += 1;
        }else if(S.at(i) == '-'){
            ans -= 1;
        }
    }

    cout << ans << endl;

}
