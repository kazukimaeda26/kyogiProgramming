#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);

  for(int i=0; i<n; i++){
    cin >> a.at(i) >> b.at(i);
  }
  int min = 100000;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==j) continue;
      if(a.at(i) < min && b.at(j) < min){
        if(a.at(i) < b.at(j)){
          min = b.at(j);
        }
        else{
          min = a.at(i);
        }
      }
    }
  }
  int minn = 100000;
  for(int i=0; i<n; i++){
    if(a.at(i)+b.at(i)<minn){
      minn = a.at(i)+b.at(i);
    }
  }
  if(minn < min){
    min = minn;
  }
  cout << min << endl;
}