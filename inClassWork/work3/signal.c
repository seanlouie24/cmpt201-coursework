#define _POSTSIX_C_SOURCE

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/type.h>
#include <unistd.h>

void handle_sigint(int);

static char *buffer = "CTRL-C pressed.\n";
void handle_sigint(int signum) { write(
