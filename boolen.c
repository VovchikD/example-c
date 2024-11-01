#include <stdio.h>
#include <stdbool.h>

int main() {
  float x, y, res;
  scanf("Print x:%f", &x);
  scanf("Print y:%f", &y);
  res = x / y;

  printf("Result: %.2f\n", res);

  char s = '2';
  printf("Symbol: %c", s);

  return 0;
}