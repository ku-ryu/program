#include <bits/stdc++.h>
using namespace std;

int main(){
    const int INF = 100000000;

    // 状態を表すクラス pair の場合、typedef しておくと便利
    typedef pair<int,int> P;

    // 入力
    char maze[100][100]; // 迷路を表す文字列の配列
    int N ,M;
    int sx, sy; // start位置
    int gx, gy; // goal位置

    int d[100][100]; // 各点までの最短距離の配列

    // 移動4方向ベクトル
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    // (sx, sy)から(gx, gy)への最短距離を求める
    // たどり着けないとINF
    
}