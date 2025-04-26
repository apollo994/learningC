#include <stdio.h>

#define MINLINE 80

int getLineLonger(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int main() {

  int len = 0;
  int max = 0;
  int c = 0;
  char line[MINLINE];

  while ((len = getLineLonger(line, MINLINE)) > 0) {
    if (line[len - 1] == '\n') {
      printf("SHORT LINE, len:%i\n", len);
      printf("%s", line);
      printf("\n");
    } else {
      while ((c = getchar()) != EOF && c != '\n') {
        ++len;
      }
      printf("LONG LINE, len:%i\n", len + 1); // +1 for \n
      printf("%s...\n", line);
      printf("\n");
    }
  }
}
