#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int x, m, n;
    scanf("%d %d %d", &x, &m, &n);
    if(x - 10 * n > 0){
      while(m&&x){
        x /= 2;
        x += 10;
        m--;
      }
      x -= n * 10;
    }else{
      x = 0;
    }
    if(x > 0) printf("NO\n");
    else printf("YES\n");
  }
}
