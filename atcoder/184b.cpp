#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)
using ll = long long;
int main(){
    int n, x;
    string s;
    cin >> n >> x >> s;
    rep(i,n) {
      if(s[i] == 'o') x++; else x--;
      if(x < 0) x = 0;
    }
    cout << x << endl;
}