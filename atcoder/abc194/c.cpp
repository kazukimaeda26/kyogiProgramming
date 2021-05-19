#include <bits/stdc++.h>
using namespace std;

const int MaxA = 200;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  // 401個入るvectorを準備
  vector<int> d(MaxA*2+1);
  // 200げたを履かせた数字のカウントを行っている。
  for(int i=0; i<n; i++) d[MaxA+a[i]]++;
  long long ans = 0;
  // aiは-200〜200を動く。
  for(int ai = -MaxA; ai <= MaxA; ai++){
    // ajは-200からaiまで動く
    for(int aj = -MaxA; aj < ai; aj++){
      long long x = ai - aj;
      ans += x*x*d[MaxA+ai]*d[MaxA+aj];
    }
  }
  cout << ans << endl;
  return 0;
}