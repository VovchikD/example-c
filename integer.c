#include <stdio.h>

int main() {
  int x = 5, y = 10, res;
  x *= 5;
  x--;

  res = x - y;

  printf("Variable: %d", res);

  return 0;
}