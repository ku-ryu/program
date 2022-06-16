#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    int N = s.size();
    for(int i = 0; i < N; i++) {
        if(s.at(i) == '0'){
            continue;
        } else if(s.at(i) == '1'){
            ans += 1;
        }
    }
    cout << ans << endl;

    return 0;
}