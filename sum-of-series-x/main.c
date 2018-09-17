#include <stdio.h>
#include <math.h>

void main () {
  float x, sum;
  int num, i;

  printf("Enter the value of n : ");
  scanf("%d", &num);

  printf("Enter the value of x : ");
  scanf("%f", &x);

  for(i = 0; i <= num; i++) {
    sum = sum + pow(x, i);
  }

  printf("Sum of series : %.2f", sum);
}
