#include <bits/stdc++.h>
using namespace std;

int main(){
  int P, W;
  cin >> P >> W;
  int count = 0;
  int res = 0;
  int p = P / 100;
  int q = 1 -p;

  vector<int> a(W);
  for(int i=0; i<W; i++){
    a[i] = pow(2,i);
    cout << a[i] << endl;
  }
  vector<string> b(W);
  for(int i=0; i<W; i++) {
    for(int j=0; j<a[i].length(); j++){
      b[i] += std::to_string(a[i] % 2);
    }
  }
  for(int i=0; i<W; i++){
    cout << b[i] << endl;
  }
}