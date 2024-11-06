#include <stdio.h>

int main(){
  int a, b, v, num,remain;
  scanf("%d %d %d", &a, &b, &v);
  num = (v-a)/(a-b);
  remain = (v-a) % (a-b);
  if (remain == 0){
    printf("%d", num + 1);
  }
  else{
    printf("%d", num + 2);
  }
  return 0;
}
