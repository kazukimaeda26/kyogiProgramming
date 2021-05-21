#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> vec(n, vector<int>(2));
  
  for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
      cin >> vec[i][j];
    }
  }

  long long ans = 0;

  for(int i=0; i<n; i++){
    ans += (long long)(vec[i][1]-vec[i][0]+1)*(vec[i][0]+vec[i][1])/2;
  }
  cout << ans << endl;
}
