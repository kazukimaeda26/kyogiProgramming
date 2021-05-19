#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> b(h, vector<int>(w));

  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      for(int m=0; m<h; m++){
        for(int n=0; n<w; n++){
          if(m==i || n==j){
            b[m][n] += a[i][j];
          }
        }
      }
    }
  }
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
}