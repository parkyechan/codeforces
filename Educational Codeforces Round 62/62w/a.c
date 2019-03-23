#include<stdio.h>
#include<stdlib.h>
int main(){
  int N, day = 0, cnt = 0, t = 1, s = 0, max;
  int arr[10001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  while(1){
    if(cnt == N) break;
    for(int j=s; j<t; j++){
      if(arr[j] > t) t = arr[j];
      cnt++;
    }
    s = t;
    t++;
    day++;
  }
  printf("%d", day);
}
