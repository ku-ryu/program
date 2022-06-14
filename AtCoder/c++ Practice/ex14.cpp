#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int m, M;
  m = min(min(A, B), C);
  M = max(max(A, B), C);

  cout << M - m << endl;
}
