#include <bits/stdc++.h>
using namespace std;

//入力
int N, M;
char field[110][110]; //庭

//現在位置
void dfs(int x, int y){
    //今いるところを.に置き換える
    field[x][y] = '.';

    //移動する8方向をループ
    for (int dx = -1; dx <= 1; dx++){
        for (int dy = -1; dy <= 1; dy++){ //-1,0,1
            // x方向にdx, y方向にdy 移動した場所を(nx, ny)とする
            int nx = x + dx, ny = y + dy;

            // nxとnyが庭の範囲内かどうかとfield[nx][ny]が
            // 水たまりかどうかを判定
            if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W'){
                dfs(nx, ny);
            }
        }
    }
    return;
}

int main(){
    int ans = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (field[i][j] == 'W'){
                // 全てが.になるまでし続ける
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
}