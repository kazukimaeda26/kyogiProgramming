#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  for(int i = 0; i < n; i++) cin >> c[i];

  vector<int> cnt(n+1);
  // aのvectorの分布のvectorを作成
  for(int i = 0; i < n; i++) cnt[a[i]]++;
  long long ans = 0;

  // bの数を順にとりだし、その番号の個数をansに加算している。
  for(int i = 0; i < n; i++) ans += cnt[b[c[i] - 1]];
  cout << ans << endl;
  return 0;
}

// 全て1のベクトルを作成したい場合は下記。
// vector<int> a(n,1)

// 例   0  1  2  3  4  5  6  7
// a = [5, 6, 7, 5, 5, 2, 1, 3]
// b = [5, 9, 8, 7, 6, 5, 8, 7]
// c = [4, 5, 6, 7, 6, 8, 7, 5]
//
// c[0]は4である。b[c[0]]は7を意味してほしい。がそうはならない。
// b[c[0]]は次のかずである6となる。（配列が0番目から始まっていることから。）
// このずれをなくすために、b[c[0]-1]としている。
