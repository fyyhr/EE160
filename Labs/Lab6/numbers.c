#include <stdio.h>
//#define DEBUG


int main() {
  /* Initialize variables */
  int input = -1;
  int count, pos, neg, even, odd, posEven, negOdd;
  int posTotal, negTotal, evenTotal, oddTotal, posEvenTotal, negOddTotal, total;

  count = pos = neg = even = odd = posEven = negOdd = 0;
  posTotal = negTotal = evenTotal = oddTotal = posEvenTotal = negOddTotal = total = 0;

  /* Get first input */
  printf("Enter your first integer to check: ");
  scanf("%d", &input);

  while (input != 0) {
    /* Increment the overall totals */
    count++;
    total += input;
    /* First case: negative and odd
     * This can be done with an exploit with the mod function returning -1 for a negative odd
     */
    /* Second case could be negative even, positive even, or positive odd */
    if (input % 2 == -1) {
      neg++;
      negTotal += input;
      odd++;
      oddTotal += input;
      negOdd++;
      negOddTotal += input;
    } else {
      /* If even */
      if (input % 2 == 0) {
        even++;
        evenTotal += input;
        /* If positive */
        if (input > 0) {
          pos++;
          posTotal += input;
          posEven++;
          posEvenTotal += input;
        } else {  /* Otherwise negative */
          neg++;
          negTotal += input;
        }
      } else { /* Otherwise positive odd */
        pos++;
        posTotal += input;
        odd++;
        oddTotal += input;
      }
    }
    printf("Enter your next integer to check (0 to quit): ");
    scanf("%d", &input);
  }
  printf("Here are your totals!\n");
  printf("There were %d positive numbers totaling %d\n", pos, posTotal);
  printf("There were %d negative numbers totaling %d\n", neg, negTotal);
  printf("There were %d even numbers totaling %d\n", even, evenTotal);
  printf("There were %d odd numbers totaling %d\n", odd, oddTotal);
  printf("There were %d positive even numbers totaling %d\n", posEven, posEvenTotal);
  printf("There were %d negative odd numbers totaling %d\n", negOdd, negOddTotal);
  printf("There were %d total numbers totaling %d\n", count, total);
}

