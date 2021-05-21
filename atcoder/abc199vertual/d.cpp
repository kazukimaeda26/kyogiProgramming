#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> to;
vector<int> used, col;
vector<int> vs;

//引数が今見ている頂点
void dfs(int v){
  // 今見ている頂点を訪れていたら、return
  if(used[v]) return;
  // 始めてきたら、usedを1とする
  used[v] = 1;
  // vsに追加
  vs.push_back(v);
  // vに隣接している頂点全てをなめて、それに対して再帰関数dfsを読む
  for(int u : to[v]) dfs(u);
}

long long now;

int main(){
  int m;
  cin >> n >> m;
  // グラフは隣接リスト
  to = vector<vector<int>>(n);
  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  long long ans = 1;
  // 最初は0利用したら1とする
  used = vector<int>(n);
  col = vector<int>(n, -1);
  for(int i=0; i<n; i++){
    // すでに訪れていたらcontinue
    if(used[i]) continue;
    ans *= 3;
    vs = vector<int>();
    dfs(i);
    // vs[0]という頂点を"0"という色で塗る。
    col[vs[0]] = 0;
    now = 0;

  }

}