#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for(int i=0; i<n; i++){
    cin >> x[i] >> y[i];
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      for(int k=0; k<j; k++){
        int a = x[j]-x[i];
        int b = y[j]-y[i];
        int c = x[k]-x[j];
        int d = y[k]-y[j];

        if(c*b == a*d){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}