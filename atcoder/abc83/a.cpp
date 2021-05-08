#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int ans = 0;
  for(int i = 0; A + i <= B; ++i){
    if ((A+i)%10 == ((A+i)/10000)%10 && ((A+i)/10)%10 == ((A+i)/1000)%10 ) ++ans;
  }
  cout << ans << endl;
}