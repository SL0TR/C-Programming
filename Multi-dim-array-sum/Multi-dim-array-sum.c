#include <stdio.h>

int main(void) {
  int a[10][10], b[10][10], sum[10][10], i, j, n;

  printf("Enter the order of the matrix ");
  scanf("%d", &n);

  printf("Enter the elements of the matrix A \n");

  for(i = 0; i < n; i++) {
    for(j = 0; j <n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of the matrix B \n");

  for(i = 0; i < n; i++) {
    for(j = 0; j <n; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      printf("The sum of the two matrix is : %d \n", sum[i][j]);
    }
  }

  return 0;
}
