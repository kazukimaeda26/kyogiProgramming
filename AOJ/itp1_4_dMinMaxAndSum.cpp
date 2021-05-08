#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);


  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }

  int min=1000000;
  int max=-1000000;
  long long sum=0;

  for(int i=0; i<n; i++){
    if(min > vec.at(i)){
      min = vec.at(i);
    }
    if(max < vec.at(i)){
      max = vec.at(i);
    }
    sum += vec.at(i);
  }
  cout << min << " " << max << " " << sum << endl;
}