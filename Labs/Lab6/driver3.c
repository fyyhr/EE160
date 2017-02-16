#include <stdio.h>
#include "exponent.h"

int main() {
  /* Initialize variables */
  float base, result;
  int power;
  
  printf("Enter the base number value: ");
  scanf("%f", &base);
  printf("Enter the power to raise your base value to: ");
  scanf("%d", &power);
  result = pos_power(base, power);
  printf("The result is %f\n", result);
  
  return 0;
}
