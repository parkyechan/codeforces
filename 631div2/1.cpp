#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int t;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    int n, x, arr[1001] = {};
    scanf("%d %d", &n, &x);
    for(int i=0; i<n; i++){
      int tmp;
      scanf("%d", &tmp);
      arr[tmp]++;
    }
    int cnt = 1;
    int flag1 = 0, flag2 = 0;
    while(x){
      if(arr[cnt++] == 0){
        x--;
        flag1++;
      }else{
        flag2++;
      }
    }
    int f = 0;
    for(int j=1; j<100; j++){
      if(arr[flag1 + flag2 + j] != 0) f++;
      else break;
    }
    printf("%d\n",flag1+flag2+f);
  }
}
