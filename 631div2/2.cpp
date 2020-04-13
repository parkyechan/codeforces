#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int r[10001][2] = {};
    int t, arr[10001] = {};
    scanf("%d", &t);
    for(int j=0; j<t; j++){
      scanf("%d", &arr[j]);
    }
    int res = 0;
    for(int k=1; k<t; k++){
      vector<int> v1, v2;
      int helper = 0;
      for(int q=0; q<k; q++){
        v1.push_back(arr[q]);
        if(arr[q] > k){
          helper = 1;
          break;
        }
      }
      if(helper) continue;
      for(int q=k; q<t; q++){
        v2.push_back(arr[q]);
        if(arr[q] > t - k){
          helper = 1;
          break;
        }
      }
      if(helper) continue;
      int flag1 = 0, flag2 = 0;
      sort(v1.begin(), v1.end());
      sort(v2.begin(), v2.end());
      // for(int q=1; q<=v1.size(); q++){
      //   if(q != v1[q-1]){
      //     flag1++;
      //     break;
      //   }
      // }
      // for(int q=1; q<=v2.size(); q++){
      //   if(q != v2[q-1]){
      //     flag2++;
      //     break;
      //   }
      // }
      // printf("> %d %d\n", v1[v1.size()-1], k);
      // printf("> %d %d\n", v2[v2.size()-1], t-k);
      // printf("--\n");
      if(v1[v1.size()-1] != k) flag1 = 1;
      if(v2[v2.size()-1] != t-k) flag2 = 1;
      if(flag1 == 0 && flag2 == 0){
        r[res][0] = v1.size();
        r[res][1] = v2.size();
        res++;
      }
    }
    printf("%d\n", res);
    for(int s=0; s<res; s++){
      printf("res : %d %d\n", r[s][0], r[s][1]);
    }
  }
}
