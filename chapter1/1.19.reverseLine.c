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

int removeTrailings(char line[], int len) {

  int i = 2;
  int new_len;
  // check for spaces and \t before \0
  while (line[len - i] == ' ' || line[len - i] == '\t') {
    line[len - i] = '\0';
    ++i;
  }
  // return new length to avoid printing empty lines
  new_len = len - i;

  return new_len;
}

int reverse(char line[], char revline[], int len) {
    
  char c = ' ';
  int i = 0;
    // printf("i = %c, len = %c", i,len);
  // for (int i = 0; i < len - 1; ++i) {
  while (i < len-1) {
    
    // printf("i = %c, len = %c", i, len);
    c = line[i];
    revline[len - i - 2 ] = c;
    ++i;
  }

  return 0;
}

int main() {

  int len = 0;
  int max = 0;
  int c = 0;
  int line_counter = 0;
  int new_len = 0;
  char line[MAXLINE];
  char revline[MAXLINE];

  while ((len = getLineLonger(line, MAXLINE)) > 0) {

    ++line_counter;

    if (line[len - 1] == '\n') { // When the end of line is encountered
      if (len == 1)              // when line is empty
        ;
      // when there a char to remove is found before end of line
      else if (line[len - 2] == ' ' || line[len - 2] == '\t') 
        new_len = removeTrailings(line, len);
        if (new_len > 0){ // print only if there is still something left
          printf("%s\n", line);
          reverse(line, revline, new_len);
          printf("%s\n", revline);
      } else {
        printf("%s", line);
        reverse(line, revline, len);
        printf("%s", revline);
      }
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
