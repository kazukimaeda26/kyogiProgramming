#include <bits/stdc++.h>
using namespace std;

int main() {

  while(true){
    int m, f, r;
    cin >> m >> f >> r;
    if(m==-1 && f==-1 && r==-1) break;

    char rank;
    if(m==-1 || f==-1){
      rank = 'F';
    }
    else if(m+f>=80){
      rank = 'A';
    }
    else if(m+f>=65){
      rank = 'B';
    }
    else if(m+f>=50 || r>=50){
      rank = 'C';
    }
    else if(m+f>=30){
      rank = 'D';
    }
    else{
      rank = 'F';
    }
    cout << rank << endl;
  }
}