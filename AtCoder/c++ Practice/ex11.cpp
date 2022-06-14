#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, n;
  cin >> N >> A;
  string enzan;

  // ここにプログラムを追記

  for (int i = 0; i < N; i++)
  {
    cin >> enzan >> n;

    if(enzan == "+"){
        A += n;
    }else if(enzan == "-"){
        A -= n;
    }else if(enzan == "*"){
        A *= n;
    }else if(enzan == "/"){
        if(n == 0){
            cout << "error" << endl;
            break;
        }
        A /= n;
    }
    cout << i + 1 << ":" << A << endl;
  }
  
}
