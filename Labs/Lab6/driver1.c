#include <stdio.h>
#include "maxmin.h"

int main() {
  float one, two, final;
  int flag = 0;
  final = 7;
  while (flag != EOF){
    printf("Enter the first value: ");
    flag = scanf("%f", &one);
    if (flag == EOF) {
      break;
    }
    printf("Enter the second value: ");
    flag = scanf("%f", &two);
    if (flag == EOF) {
      break;
    }
    final = max(one, two);
    printf("Maximum of inputs: %f\n", final);
    final = min(one, two);
    printf("Minimum of inputs: %f\n", final);
  }
  return 0;
}
