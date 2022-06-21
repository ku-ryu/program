#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int N;
    cin >> N;
    int m[N];
    for(int i = 0; i < N; i++){
        m[i] = 0;
    }

    int tmp, ans = N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        m[i] = tmp;
        for(int j = 0; j < i; j++){
            if(tmp == m[j]){
                ans--;
            }
        }
    }
    cout << ans << endl;
}*/

int main(){
    int N;
    int m[110];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> m[i];
    }
    set<int> ans;
    for (int i = 0; i < N; i++)
    {
        ans.insert(m[i]);
    }
    cout << ans.size() << endl;
    
}