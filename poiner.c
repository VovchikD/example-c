#include <stdio.h>

struct Abstract {
  int width, hight;
};

void calc(struct Abstract *obj);

int main() {
  struct Abstract squeer = { 6, 5 };
  calc(&squeer);

  printf("%p\n", &squeer);

  return 0;
}

void calc(struct Abstract *obj) {
  int result = obj->width * obj->hight;

    printf("%d\n", result);
}