#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int N;
    vector<vector<int>> data(1000009, vector<int>(2));
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> data[i][1] >> data[i][2];
    }
    int n;
    cin >> n;
    int ans1, ans2;
    int first, last;

    for(int i = 0; i < n; i++){
        cin >> first >> last;
        for(int j = first; j <= last; j++) {
            if(data[j][1] == 1){
                ans1 += data[j][2];
            }else if(data[j][1] == 2){
                ans2 += data[j][2];
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
}*/

int main(){
    int N, Q;
    int C[100009], P[100009];
    int L[100009], R[100009];

    int sum1[100009], sum2[100009];

    cin  >> N;
    for(int i = 1; i <= N; i++){
        cin >> C[i] >> P[i];
    }
    cin >> Q;
    for(int i = 1; i <= Q; i++){
        cin >> L[i] >> R[i];
    }

    for(int i = 1; i <=N; i++){
        sum1[i] = sum1[i - 1];
        sum2[i] = sum2[i - 1];
        if(C[i] == 1) sum1[i] += P[i];
        if(C[i] == 2) sum2[i] += P[i];
    }

    for(int i = 1; i <= Q; i++){
        int ans1 = sum1[R[i]] - sum1[L[i] - 1];
        int ans2 = sum2[R[i]] - sum2[L[i] - 1];
        cout << ans1 << " " << ans2 << endl;
    }
}