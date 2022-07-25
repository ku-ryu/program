#include <iostream>

using namespace std;

int a[21];
int n, sumk;

//iまででsumを作って、残りi以降を調べる
bool dfs(int i, int sum){
    //n個決め終わったら,今までの和sumがsumkと等しいか調べる
    if (i == n) return sum == sumk;

    //a[i]を使わない場合
    if(dfs(i + 1, sum)) return true;

    //a[i]を使う場合
    if(dfs(i + 1, sum + a[i])) return true;

    //a[i]を使う使わないに拘わらずsumkが作れない
    return false;
}

void solve(){
    if (dfs(0, 0)) cout << "Yes" << endl; //(0, 0)で初期化
    else cout << "No" << endl;
}