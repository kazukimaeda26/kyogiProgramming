#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i = 1;
  while(i<n+1) {
    if(i%3==0 || i%10==3 || (i%100/10)==3 || (i%1000/100)==3 || (i%10000/1000)==3){
      cout << " " << i;
    }
    i++;
  }
  cout << endl;
}