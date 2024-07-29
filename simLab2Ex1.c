#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

int main(int argc, char** arvg) {
  if (argc != 2) {
    fprintf(stderr, "Please provide the address of a file as an input.\n");
    return -1;
  }
  char cmd[BUFSIZE] = "wc -c < ";
  strcar(cmd, argv[1]);
  system(cmd);
}
