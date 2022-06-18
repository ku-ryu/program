#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int a[110];
    int Alice;
    int Bob;

    cin >> N;
    for ( int i = 0; i < N; i++ ){
        cin >> a[i];
    }
    sort(a, a + N, greater<int>());

    for ( int i = 0; i < N; i + 2 ){
        Alice += a[i];
    }
    for ( int i = 1; i < N; i + 2 ){
        Bob += a[i];
    }
    cout << Alice - Bob << endl;
}