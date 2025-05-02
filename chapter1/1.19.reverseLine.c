#include <stdio.h>

#define MAXLINE 80

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

void reverse(char line[], int len) {

  char tmp;
  int i, j;

  i = len - 2; // last index before \n

  /* if len is not know, i can be founf as follow
  while (line[i] != '\0') // find index of end
    ++i;
  --i;
  if (s[i] == '\n')
    --i;
  */

  j = 0;

  while (j < i) {

    tmp = line[j];
    line[j] = line[i];
    line[i] = tmp;
    ++j;
    --i;
  }
}

int main() {

  int len;
  int line_counter;
  char c;
  char line[MAXLINE];

  while ((len = getLineLonger(line, MAXLINE)) > 0) {

    ++line_counter;
    if (line[len - 1] == '\n') {
      printf("%s", line);
      reverse(line, len);
      printf("%s", line);

    } else {
      while ((c = getchar()) != EOF &&
             c != '\n') { // continue reading to consume chars
        ;
      }
      printf("[Line %i is too long for me! (max %i charachters)]\n",
             line_counter, MAXLINE);
    }
  }
}
