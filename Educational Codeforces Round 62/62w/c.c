#include<stdio.h>

int main(){
  int a, b, max, min, sum = 0, cnt = 1, circuit = 1, s = 0;
  int arr1[300001] = {}, arr2[300001] = {};
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%d %d", &arr1[i], &arr2[i]);
  }
  for(int i=1; i<=b; i++) sum += i;
  for(int i=0; i<sum; i++){
    for(int j=s; j<cnt; j++){

    }
    cnt++;
    if(cnt == b){
      cnt = circuit;
      circuit++;
      s++;
    }
  }
}
