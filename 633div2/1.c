#include <stdio.h>
#include<conio.h>
int main() {
  int ss = 0;
  scanf("%d", &ss);
  for(int qq=0; qq<ss; qq++){
    int i, j, k, num = 2, power;
    int next_sum = 0, temp_number, index = 0;
    int data[10000] = { 0 };
    scanf("%d", &power);//n의 m승 구하기
    if(power == 1){
      printf("1\n");
      continue;
    }
    power -= 1;
    data[0] = num;
    for (i = 1; i<power; i++) {
      temp_number = 0;
      next_sum = 0;
      for (j = index; j >= 0; j--) {
        temp_number = data[j] * num + next_sum;
        next_sum = 0;
        if (temp_number > 9) {
          data[j] = temp_number % 10;
          if (j == 0){
            for (k = index; k >= 0; k--) {
              data[k + 1] = data[k];
            }
            data[0] = temp_number / 10; index++;
          } else {
            next_sum = temp_number / 10;
          }
        } else {
          data[j] = temp_number;
        }
      }
    }
    for (i = 0; i <= index; i++)
      printf("%d", data[i]);
    printf("\n");
  }
}
