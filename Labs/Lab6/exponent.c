#include "exponent.h"

/**
 * A function that returns the value of a number raised to a positive exponent
 *
 * @param base the base number to be raised
 * @param exponent what power to raise the base to
 * @return the computed value of the number raised to the exponent
 */
float pos_power(float base, int exponent) {
  int count = 1;
  float total = base;
  while (count < exponent) {
    total = total * base;
    count++;
  }
  return total;
}


