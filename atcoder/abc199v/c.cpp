#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  string s;
  cin >> n >> s >> q;
  vector<vector<int>> vec(q, vector<int>(3));
  for(int i=0; i<q; i++){
    for(int j=0; j<3; j++){
      cin >> vec[i][j];
    }
  }
  for(int i=0; i<q; i++){
    if(vec[i][0]==1){
      for(int j=0; j<s.length(); j++){
        if(j == vec[i][1]){
          char tmp = s[j];
          s[j] = s[vec[i][2]];
          s[vec[i][2]] = tmp;
        }
        else s[j] = s[j];
      }
    }
    else{

    }
  }
  cout << s << endl;
}