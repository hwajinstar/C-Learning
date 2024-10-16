#include <stdio.h>

int main(){
  int a; 
  int b;
  int c;
  scanf("%d %d %d", &a, &b, &c);
  if (a == b && b == c){
    printf("%d\n", 10000 + 1000 * a);
  }
  else if (a == b || b == c){
    printf("%d\n", 1000 + 100 *b);
  }
  else if (a == c){
    printf("%d\n", 1000 + 100 * a);
  }
  else{
    if (a > b && a > c){
      printf("%d", 100 * a );
    }
    else if (b > a && b > c){
      printf("%d", 100 * b);
    }
    else{
      printf("%d", 100 * c);
    }
  }
}
