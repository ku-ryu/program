#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int N, Y;
    cin >> N >> Y;

    int x = 10000, y = 5000, z = 1000;
    int ansx, ansy, ansz;

    ansx = Y / x;
    if(ansx > N){
        ansx = -1;
        ansy = -1;
        ansz = -1;
        cout << ansx << " " << ansy << " " << ansz << endl;
    }

    ansy = (Y % x) / y;
    if(ansx + ansy > N){
        ansx = -1;
        ansy = -1;
        ansz = -1;
        cout << ansx << " " << ansy << " " << ansz << endl;
    }

    ansz = ((Y % x) % y) / z;
    if(ansx + ansy + ansz > N ){
        ansx = -1;
        ansy = -1;
        ansz = -1;
        cout << ansx << " " << ansy << " " << ansz << endl;
    } else if(((Y % x) % y) % z > 0){
        ansx = -1;
        ansy = -1;
        ansz = -1;
        cout << ansx << " " << ansy << " " << ansz << endl;
    }

    cout << ansx << " " << ansy << " " << ansz << endl;
} */

int main() {
    int N, Y;
    cin >> N >> Y;
    int ansx = -1, ansy = -1, ansz = -1;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j + i <= N; j++){
            int z = N - i - j;
            int total = 10000 * i + 5000 * j + 1000 * z;
            if(total == Y){
                ansx = i;
                ansy = j;
                ansz = z;
            }
        }
    }

    cout << ansx << " " << ansy << " " << ansz << endl;
}