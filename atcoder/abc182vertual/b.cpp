#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int ans = 2;
  int ans_count = 0;
  for(int k=2; k<1001; k++){
    int count=0;
    for(int i=0; i<n; i++){
      if(a[i]%k==0) count++;
    }
    if(count>=ans_count){
      ans_count = count;
      ans = k;
      }
  }
  cout << ans << endl;
}

