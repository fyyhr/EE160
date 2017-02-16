#include <stdio.h>
#include "maxmin.h"

int main() {
  /* Initialize variables */
  float high, low, input;
  high = low = 0;
  input = -1; /* Set to -1 to ensure the program will enter the loop */

  while(input != 0) {
    printf("Enter a value: ");
    scanf("%f", &input);
    high = max(high, input);
    low = min(low, input);
  }
  printf("The maximum value inputted is %.2f\n", high);
  printf("The minimum value inputted is %.2f\n", low);
  
  return 0;
}
