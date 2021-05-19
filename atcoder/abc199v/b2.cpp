#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int INF = 1001001001;
  int l = 0, r = INF;
  for(int i=0; i<n; i++){
    int a;
    cin >> a;
    l = max(l, a);
  }
  for(int i=0; i<n; i++){
    int b;
    cin >> b;
    r = min(r, b);
  }

  int ans = r - l + 1;
  ans = max(0, ans);
  cout << ans << endl;
}