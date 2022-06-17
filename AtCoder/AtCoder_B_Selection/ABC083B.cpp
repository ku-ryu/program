#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int N;
    cin >> N;
    int A, B;
    cin >> A >> B;
    int l[6];

    int ans = 0;
    int T = 0;
    for(int tmp = 1; tmp <= N; tmp++) {
        if(0 < tmp && tmp < 10){
            if(A <= tmp && tmp <= B){
                ans = ans + tmp;
            }
        } else if (10 <= tmp && tmp <= N){
            string a = to_string(tmp);
            for(int i = 0; i < a.size(); i++){
                l[i] = a[i];
            }
            
            for(int i = 0; i < a.size(); i++){
                T += l[i];
            }
            if(A <= T && T <= B){
                ans = ans + T;
            }
        }
    }
    cout << ans << endl;
} */

// 10進数は10で割っていけば各桁の和の足せる

int add(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;

    for (int i = 0; i <= N; i++){
        int sum = add(i);
        if(A <= sum && sum <= B){
            ans += i;
        }
    }
    cout << ans << endl;
}