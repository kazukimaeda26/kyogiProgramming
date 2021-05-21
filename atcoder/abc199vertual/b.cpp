#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);

  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  for(int i=0; i<n; i++){
    cin >> b[i];
  }
  int count = 0;
  for(int x=0; x<=1000; x++){
    bool ok = false;
    for(int i=0; i<n; i++){
      if(a[i] <= x && x <= b[i]) {
        ok = true;
        continue;
      }
      else{
        ok = false;
        break;
      }
    }
    if(ok) count++;
  }
  cout << count << endl;
}