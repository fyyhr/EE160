#include <stdio.h>
#define DEBUG


int main() {
  int debug = 1;
  printf("This is the main function! Yay!\n");
#ifndef DEBUG
  printf("This is hidden behind the ifdef!\n");
#endif
}
