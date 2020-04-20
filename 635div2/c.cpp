#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int n, k;
vector<int> v[200001];
vector<int> chk[200001];
vector<pair<int, int>> res;
void DFS(int L, int cnt){
  if(!v[L].size()){
    res.push_back(make_pair(L, cnt));
  }else{
    for(int i=0; i<v[L].size(); i++){
      DFS(v[L][i], cnt+1);
    }
  }
}
int main(){
  scanf("%d %d", &n, &k);
  chk[1] = 1;
  for(int i=0; i<n-1; i++){
    int s, e;
    scanf("%d %d", &s, &e);
    if(s == 1){
      v[s].push_back(e);
    }else if(e == 1){
      v[e].push_back(s);
    }else if(!chk[s]){

    }else if(!chk[e]){

    }
  }
  printf("---\n");
  // for(int i=0; i<n+1; i++){
  //   int tmp = v[i].size();
  //   for(int j=0; j<tmp; j++){
  //     printf("%d %d\n", i, v[i][j]);
  //     v[i].pop_back();
  //   }
  // }
  DFS(1, 0);
  printf("---\n");
  for(int i=0; i<res.size(); i++){
    printf("%d %d\n", res[i].first, res[i].second);
  }
}
