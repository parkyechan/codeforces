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
      int arr1[10001] = {}, arr2[10001] = {};
      int helper = 0;
      for(int q=0; q<k; q++){
        arr1[arr[q]]++;
        if(arr[q] > k){
          helper = 1;
          break;
        }else if(arr1[arr[q]] > 1){
          helper = 1;
          break;
        }
      }
      if(helper) continue;
      for(int q=k; q<t; q++){
        arr2[arr[q]]++;
        if(arr[q] > t- k){
          helper = 1;
          break;
        }else if(arr2[arr[q]] > 1){
          helper = 1;
          break;
        }
      }
      if(helper) continue;
      int flag1 = 0, flag2 = 0;
      if(flag1 == 0 && flag2 == 0){
        r[res][0] = k;
        r[res][1] = t-k;
        res++;
      }
    }
    printf("%d\n", res);
    for(int s=0; s<res; s++){
      printf("%d %d\n", r[s][0], r[s][1]);
    }
  }
}
