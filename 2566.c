#include <stdio.h>

int main(){
  int a[9][9];
  int max = -1, b, maxi,maxj;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      b = a[i][j];
      if (b > max){
        max = b;
        maxi = i+1;
        maxj = j+1;
      }
    }
  }
  printf("%d\n%d %d", max, maxi, maxj);
  return 0;
}
