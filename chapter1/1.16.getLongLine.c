#include <stdio.h>

#define MAXLINE 20

void copy(char to[0], char from[0]) {

  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

int getLine(char s[], int lim) {

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
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {

    if (line[len - 1] != '\n') {
      while ((c = getchar()) != EOF && c != '\n') {
        ++len;
      }
      ++len; // +1 fror \n
    }
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  }
    if (max > 0) {
      printf("Longest line:\n");
      printf("%s", longest);
      if (max > MAXLINE) {
        printf("...\n");
      } else
        printf("\n");
      printf("Length = %i chars\n", max);
    }
}
