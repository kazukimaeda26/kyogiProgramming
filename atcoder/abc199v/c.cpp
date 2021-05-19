#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int q;
  cin >> q;
  int fl = 0;
  int n2 = n*2;
  for(int i=0; i<q; i++){
    int t, a, b;
    cin >> t >> a >> b;
    if(t==1){
      // 0からのスタートに揃える
      --a; --b;
      //flipしている状態なら,入れ替える位置をうまいこと調整する。
      // (ex)n=4, a=5, b=7だとるすると, 1番目と3番目をswapしたい。n足して2nで割ったときのあまりとするとよい。
      if(fl) a=(a+n)%n2;
      if(fl) b=(b+n)%n2;
      swap(s[a],s[b]);
    } else {
      //0と1の反転
      fl ^= 1;
    }
  }
  if (fl) {
    // 0番目からn個取り出す
    string s1 = s.substr(0,n);
    // n番目以降全て取り出す
    string s2 = s.substr(n);
    s = s2+s1;
  }
  cout << s << endl;
}