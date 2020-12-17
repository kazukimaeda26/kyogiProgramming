#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); ++i)
using ll = long long;
int main(){
  int n;
  cin >> n ;
  vector<vector<int>> data(n, vector<string>(6));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 6; j++) {
      cin >> data.at(i).at(j);
    }
  }
}