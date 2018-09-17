#include<stdio.h>
#include<conio.h>

int main(){
  int n,i,j;

  printf("Enter the no of lines: ");
  scanf("%d", &n);

  for(i=1; i<= n; i++){ //number of lines
    for(j=1; j<=i; j++){ //number of stars in each line
      printf("%d", j);
    }
    printf("\n");
  }

  getch();

  return 0;
}
