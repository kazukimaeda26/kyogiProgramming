#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  vector<int> vec(n);
  for(int i = 0; i < n; i++) {
    cin >> vec.at(i);
  }

  int count = 0;
  for(int i = 0; i < n; i++) {
    if( vec.at(i) == x) {
      vec.erase(vec.begin()+i);
      count++;
    }
  }

  for(int i = 0; i < n-count; i++){
    cout << vec.at(i);
  }
}


