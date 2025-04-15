#include <ctype.h>
#include <stdio.h>

int main() {

  int c, len;
  int arr[10]; // 0 spaces, 1...8, 9+

  for (size_t i = 0; i < 10; ++i) {
    arr[i] = 0;
  }

  while ((c = getchar()) != EOF) {

    if (isspace(c)) {
      ++arr[0];

      if (len != 0) {
        if (len > 9) {
          len = 9;
        }
        ++arr[len];
      }
      len = 0;
      continue;
    }

    ++len;
  }

  for (size_t i = 0; i < 10; ++i) {
    printf("%lu\t", i);
    for (int j = 0; j < arr[i]; ++j) {
      printf("=");
    }
    printf("\n");
  }
  return 0;
}
