#include "maxmin.h"
/**
 * Returns the greater of two floats. If they are equal, returns the first input
 *
 * @param n1 a float value
 * @param n2 a float value
 * @return the greater of n1 or n2, or n1 if they are equal
 */
float max(float n1, float n2) {
  if (n1 >= n2) {
    return n1;
  } else {
    return n2;
  }
}

/**
 * Returns the lesser of two floats. If they are equal, returns the first input
 *
 * @param n1 a float value
 * @param n2 a float value
 * @return the lesser of n1 or n2, or n1 if they are equal
 */
float min(float n1, float n2) {
  if (n1 <= n2) {
    return n1;
  } else {
    return n2;
  }
}
