#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n+1);
    
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  for(int i=0; i<n; i++){
    cin >> b[i];
  }

  int x;
  for(int i=0; i<n; i++){
    cin >> x;
    c[x]++;
  }
  int ans = 0;
  for(int i=0; i<n; i++){
      for(int j=i; j<n; j++){
          if(a[i] == b[j]) ans += 1*c[j+1];
      }
  }
  cout << ans << endl;
}