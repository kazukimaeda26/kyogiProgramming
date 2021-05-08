#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int> > A(n, vector<int>(m));
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> A.at(i).at(j);
    }
  }

  vector<int> B(m);
  for(int i=0; i<m; i++){
    cin >> B.at(i);
  }

  vector<int> sum(n);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      sum.at(i) += A.at(i).at(j) * B.at(j);
    }
  }
  for(int i=0; i<n; i++){
    cout << sum.at(i) << endl;
  }
}