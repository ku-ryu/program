#include <bits/stdc++.h>
using namespace std;

/*int main() {
    int N;
    cin >> N;
    int reverse = 0, ans = 0;

    while(N > 0) {
        reverse = reverse * 10 + N % 10;
        N /= 10;
    }
    int K;
    cin >> K;

    if(reverse == K) {
        ans += 1;
    }

    cout << ans << endl;
}*/

int main() {
    long long n, k;
    cin >> n >> k;
    if(k % 10 == 0) {
        cout << 0 << endl;
        return 0;
    }
    long long x = k;
    string s = to_string(k);
    reverse(s.begin(), s.end());
    long long y = stoll(s);
    if(x > y){
        cout << 0 << endl;
        return 0;
    }
    map<long long, int> mp;
    while(true){
        if(1 <= x && x <= n){
            mp[x]++;
        }else {
            break;
        }
        x *= 10;
    }
    while(true){
        if(1 <= y && y <= n){
            mp[y]++;
        }else{
            break;
        }
        y *= 10;
    }
    cout << mp.size() << endl;
    return 0;
}