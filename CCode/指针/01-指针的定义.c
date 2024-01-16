#include <stdio.h>

int main() {
  int x = 2;
  int *px = &x;
  printf("*p = %d\n", *px);
  ++*px;
  printf("*p = %d\n", *px);
  return 0;
}
