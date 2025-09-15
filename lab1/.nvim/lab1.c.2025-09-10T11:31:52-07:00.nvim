#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

int main() {
  char *line = NULL;
  size_t n = 0;

  printf("Please enter some text: \n");
  if (getline(&line, &n, stdin) != -1) {
    printf("Tokens:\n");
    char *ret = NULL;
    char *saveptr = NULL;
    char *str = line;
    while ((ret = strtok_r(str, " ", &saveptr))) {
      printf(" %s\n", ret);
      str = NULL;
    }
  } else {
    printf("Failure reading line!\n");
  }
  free(line);
  return 0;

  // Write a prompt
  // use getline() to get unput from the user
  // write a response
  // handle errors from getline()
  // prep the tokenizer
  // loop over the tokens in the string
  // do any cleanup
}
