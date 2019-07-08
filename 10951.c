#include <stdio.h>

int main(void) {
  int num1 = 0, num2 = 0;

  while(scanf("%d %d", &num1, &num2) != EOF)
    printf("%d\n", num1+num2);
}