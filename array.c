#include <stdio.h>
#include <stdbool.h>

int main() {
  int arr[5] = { 3, 33, 442, 544, 1234 };

  char words[] = { "Hello World" };
  words[0] = 'G';

  printf("%s\n", words);

  return 0;
}