/*      File : sum.c            *
 *      By   : Conner Higashino                 *
 *      login: csh3173                 *
 *      team : Solutions                 *
 *      Date : February 6, 2017                 */

/*  A program to compute the sum of numbers given on the input  */

#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
  float sum = 0;
  float input;
  int flag;
  int count = 0;

        /*  Get the first input            */
  printf("Enter the first number you would like to average: ");
  scanf("%f", &input);

        /*  While there is more input      */
  while (flag != EOF) {

        /*  Accumulate the sum     */
    sum += input;
    /* Increment number of inputs tracked */
    count++;
                /*  Get the next input     */
    printf("Enter the next number you would like to add: ");
    flag = scanf("%f", &input);
  }

  /* Compute average */
  sum /= count;

        /*  Print the results              */
  printf("Done");
  printf("\nThe average of your %d numbers is: %.2f\n", count, sum);

  return 0;
}
