#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for(int i=0; i<n; i++){
    cin >> vec[i];
  }
  for(int j=n; j>0; j--){
    if(j!=1){
      cout << vec[j-1] << " ";
    }
    else {
      cout << vec[j-1] << endl;
    }
  }
}