#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);

  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  vector<int> cnt(200);
  for(int i=0; i<n; i++){
    // i番目の数をmod200し、vectorの中に個数を記録している。
    cnt[a[i]%200]++;
  }
  long long ans = 0;
  //キャストする必要がある。(int から long longに変換する)
  for(int i=0; i<200; i++) ans += (long long)cnt[i]*(cnt[i]-1)/2;
  cout << ans << endl;
  return 0;
}