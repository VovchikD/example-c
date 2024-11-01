#include <stdio.h>

int main() {
  int x = 50;

  if(x <= 5) {
    printf("Yes\n");
  } else if(x >= 49) {
    printf("X bigger than 5\n");
  } else {
    printf("No\n");
  }

  return 0;
}