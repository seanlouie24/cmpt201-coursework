#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid = fork();

  if (pid == 0) {
    printf("This is child \n");
  } else {
    printf("This is parent: child pid is %d\n", pid);
  }
}
