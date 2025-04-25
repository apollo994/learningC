#include <ctype.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#define ASCII CHAR_MAX

int print_v(int arr[ASCII]) {

  size_t max = 0;
  for (size_t i = 1; i < ASCII; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  for (size_t i = max; i > 0; --i) {
    for (size_t j = 0; j < ASCII; ++j) {
      if (arr[j] >= i) {
        printf(" * ");
      } else {
        printf("   ");
      }
    }
    printf("\n");
  }

  for (size_t i = 0; i < ASCII; ++i) {
    printf("---");
  }
  printf("\n");

  for (int i = 0; i < ASCII; ++i) {
    printf(" %c ", i);
  }
  printf("\n");

  return 0;
}

int print_h(int arr[ASCII]) {

  for (uint8_t i = 0; i < ASCII; ++i) {
    printf("%c",i);
    size_t max = arr[i];
    for (size_t c = 0; c < max; ++c) {
        printf("=");
        }
    printf("\n");
  }
  return 0;
}

int main() {

  int c;
  int arr[ASCII]; // all ASCII crh

  for (size_t i = 0; i < ASCII; ++i) {
    arr[i] = 0;
  }

  while ((c = getchar()) != EOF)
    ++arr[c];

  print_h(arr);
}
