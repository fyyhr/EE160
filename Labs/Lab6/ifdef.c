#include <stdio.h>
//#define DEBUG


int main() {
  int debug = 1;
  printf("This is the main function! Yay!\n");
#ifdef DEBUG
  printf("This is hidden behind the ifdef!\n");
#endif
  if (debug) {
    printf("This is an if statement for debug!\n");
  }
}
