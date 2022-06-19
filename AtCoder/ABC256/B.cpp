#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int l[110];
    for (int i = 0; i < 110; i++){
        l[i] = 0;
    }

    int a;
    int ans = 0;

    for(int i = 0; i < N; i++){
        cin >> a;
        for(int j = 0; j <= i; j++){
            l[j] += a;
            if(l[j] >= 5){
                for(int k = j; k < N; k++){
                    l[k] = l[k + 1];
                }
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}