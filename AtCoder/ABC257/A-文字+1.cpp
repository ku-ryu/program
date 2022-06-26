#include <bits/stdc++.h>
using namespace std;

/*
int main(){
    int N, X;
    cin >> N >> X;
    int count = 0;

    string ans[3000];

    for(int i= 0; i < N; i++){
        ans[i] = 'A';
        count++;
    }
    for(int i= count; i - count < N; i++){
        ans[i] = 'B';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'C';
        count++;
    }
    for(int i= 0; i -count < N; i++){
        ans[i] = 'D';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'E';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'F';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'G';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'H';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'I';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'J';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'K';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'L';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'M';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'N';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'O';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'P';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'Q';
        count++;
    }
    for(int i= 0; i- count < N; i++){
        ans[i] = 'R';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'S';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'T';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'U';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'V';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'W';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'X';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'Y';
        count++;
    }
    for(int i= 0; i - count< N; i++){
        ans[i] = 'Z';
        count++;
    }
    
    cout << ans[X - 1] << endl;

}
*/

int main(){
    int n, x;
    cin >> n >> x;
    string s;
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < n; j++){
            s.push_back('A' + i);
        }
    }
    
    x -= 1;
    cout << s[x] << endl;
}