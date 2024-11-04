#include <stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  int a[100][100], b[100][100];
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int k = 0; k < n; k++){
    for (int l = 0; l < m; l++){
      scanf("%d",&b[k][l]);
    }
  }
  for(int o = 0; o < n; o++){
    for (int p = 0; p < m; p++){
      printf("%d ",a[o][p]+ b[o][p]);
    }
    printf("\n");
  }
  return 0;
}
