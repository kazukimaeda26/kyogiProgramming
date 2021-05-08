#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> vec(n);

  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }

  long long sum = 0;
  for(int i=2; i<=n; i++){
    for(int j=1; j<i; j++){
      sum += pow(vec.at(i-1)-vec.at(j-1),2);
    }
  }
  cout << sum << endl;
}