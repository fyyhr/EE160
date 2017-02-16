#include <stdio.h>
#include "outside.h"

int main() {
  printf("It compiles!\n");
  printf("We're now going to try call a function from another file.  .  .\n");
  checkItOut();
  printf("Tahdah!\n");
}
