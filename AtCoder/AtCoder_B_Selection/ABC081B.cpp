#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int vec[210];

    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }

    int count = 0;
    int count_2 = 0;

    while(true){
        bool found = false;
        for(int i = 0; i < N; i++){
           if(vec[i] % 2 != 0){
            found = true;
           }
        }
        if (found) break;

        for(int i = 0; i < N; i++){
            vec[i] = vec[i] / 2;
        }
    
        count++;
    }
    cout << count << endl;
}