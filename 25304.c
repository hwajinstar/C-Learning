#include <stdio.h>

int main(){
  int x,n,a,b,max;
  max = 0;
  scanf("%d", &x);
  scanf("%d", &n);
  for (int i = 0; i < n; ++i){
    scanf("%d %d", &a, &b);
    max += a * b;
  } 
  if (max == x){
    printf("Yes");
  }
  else{
    printf("No");
  }
}
