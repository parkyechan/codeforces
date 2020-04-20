#include<stdio.h>
int main(){
  int t;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    int a, b, c, d, x, y, z;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d %d %d\n", b, c, c);
  }
}
